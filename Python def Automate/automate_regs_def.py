import csv
from datetime import date
import time

# Create all variables needed later
templates = {}
template_key = ''
template_lines_count = 0
temp_template = ''
temp_read_line = ''
hundred_spaces_for_Alignment = ' '*100
registers_with_bits_defs = {}
registers_without_bits_defs = {}
header_file_name = ''
my_name = 'Amr Gaber'
temp_txt = ''

with open('templates.txt', 'r') as templates_file:
    # read the first line in the file to be used first in the while loop
    temp_read_line = templates_file.readline()
    while temp_read_line:
        # read template address
        temp_read_line = templates_file.readline()
        template_key = temp_read_line.strip()

        # read how many lines in this template
        temp_read_line = templates_file.readline()
        template_lines_count = int(temp_read_line.replace('Lines: ', '').strip())

        # read templates
        temp_template = ''
        for i in range(0, template_lines_count):
            temp_read_line = templates_file.readline()
            temp_template = temp_template + temp_read_line
        temp_read_line = templates_file.readline()
        templates[template_key] = temp_template

with open('regs.csv', 'r') as registers_csv_file:
    # open registers file as a csv object
    csv_reader = csv.reader(registers_csv_file)

    # Ignore first csv line cause it containes columns names
    next(csv_reader, None)

    # iterate over each line in csv file and make a dict out of each line to use in templates
    for register in csv_reader:
        #for registers with special names for each bit
        if len(register) == 10:
            # Unify pins names in gpio registers
            if (register[1])[0:4] == 'PORT':
                for i in range(2, 10):
                    register[i] = register[i].replace('PORT', 'PIN')
            elif (register[1])[0:3] == 'DDR':
                for i in range(2, 10):
                    register[i] = register[i].replace('DD', 'PIN')
            # add the register as a dict to a dict of dicts specific for
            # registers with special names for each bit
            registers_with_bits_defs[register[1]] = {'register_address': register[0].replace('$', ''),\
                'register_name': register[1], 'register_bit7': register[2], 'register_bit6': register[3],\
                'register_bit5': register[4], 'register_bit4': register[5], 'register_bit3': register[6],\
                'register_bit2': register[7], 'register_bit1': register[8], 'register_bit0': register[9]}

        #for registers with no bits names
        if len(register) == 3:
            # add the register as a dict to a dict of dicts specific for
            # registers with no bits names
            registers_without_bits_defs[register[1]] = {'register_address': register[0].replace('$', ''),\
                'register_name': register[1], 'register_description': register[2]}

# open a new header file with a unique name generated time specific
# to avoid overwriting
header_file_name = 'register_definition_file_TIME_PLACEHOLDER.h'.replace('TIME_PLACEHOLDER', \
    date.today().strftime('%y_%m_%d_') + time.strftime("%H_%M_%S", time.localtime()))

with open(header_file_name, 'w') as register_definition_file:
    register_definition_file.write(templates['HEADER_FILE_HEADER_TEMPLATE']\
        .replace('FILE_NAME_PLACEHOLDER', header_file_name)\
        .replace('AUTHOR_PLACEHOLDER', my_name)\
        .replace('DATE_PLACEHOLDER', date.today().strftime('%d/%m/%Y ') +\
        time.strftime("%H:%M:%S", time.localtime())))
    # register_definition_file.write('\n')

    register_definition_file.write(templates['FILE_GUARD_START']\
        .replace('HEADERFILE_DEF_NAME_PLACEHOLDER', (header_file_name\
            .upper().replace('.', '_')+'_')))
    register_definition_file.write('\n')

    register_definition_file.write('typedef unsigned char uint8;\n')
    register_definition_file.write('\n')

    for register in registers_with_bits_defs:
        register_definition_file.write('/*Register: REGISTER_NAME_PLACEHOLDER*/\n'\
            .replace('REGISTER_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_name']))

        register_definition_file.write(templates['REGISTER_DEFINITION_TEMPLATE']\
            .replace('REGISTER_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_name'])\
            .replace('BIT0_PLACEHOLDER', registers_with_bits_defs[register]['register_bit0'])\
            .replace('BIT1_PLACEHOLDER', registers_with_bits_defs[register]['register_bit1'])\
            .replace('BIT2_PLACEHOLDER', registers_with_bits_defs[register]['register_bit2'])\
            .replace('BIT3_PLACEHOLDER', registers_with_bits_defs[register]['register_bit3'])\
            .replace('BIT4_PLACEHOLDER', registers_with_bits_defs[register]['register_bit4'])\
            .replace('BIT5_PLACEHOLDER', registers_with_bits_defs[register]['register_bit5'])\
            .replace('BIT6_PLACEHOLDER', registers_with_bits_defs[register]['register_bit6'])\
            .replace('BIT7_PLACEHOLDER', registers_with_bits_defs[register]['register_bit7'])\
            .replace('- ', ''))

        register_definition_file.write('/*REGISTER_NAME_PLACEHOLDER Address Access Macro*/\n'\
            .replace('REGISTER_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_name']))

        register_definition_file.write(templates['REGISTER_WITH_BITS_DEFS_ADDRESS_ACCESS_TEMPLATE']\
            .replace('REGISTER_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_name'])\
            .replace('REGISTER_ADDRESS_PLACEHOLDER', registers_with_bits_defs[register]['register_address']))

        register_definition_file.write('/*REGISTER_NAME_PLACEHOLDER Bit Macros*/\n'\
            .replace('REGISTER_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_name']))
        for i in range(0, 8):
            if registers_with_bits_defs[register]['register_bit'+str(i)] != '-':
                temp_txt =  templates['REGISTER_BIT_POSITION_MACRO_TEMPLATE']\
                    .replace('REGISTER_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_name'])\
                    .replace('BIT_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_bit'+str(i)])\
                    .replace('BIT_POSITION_PLACEHOLDER', '').strip()
                temp_txt = temp_txt + (40 - len(temp_txt))*' ' + 'BIT_POSITION_PLACEHOLDER\n'
                temp_txt = temp_txt.replace('BIT_POSITION_PLACEHOLDER', '0x'+str(i))
                register_definition_file.write(temp_txt)

                temp_txt = ''
                temp_txt =  templates['REGISTER_BIT_MASK_MACRO_TEMPLATE']\
                    .replace('REGISTER_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_name'])\
                    .replace('BIT_NAME_PLACEHOLDER', registers_with_bits_defs[register]['register_bit'+str(i)])\
                    .replace('BIT_MASK_PLACEHOLDER', '').strip()
                temp_txt = temp_txt + (40 - len(temp_txt))*' ' + 'BIT_MASK_PLACEHOLDER\n'
                temp_txt = temp_txt.replace('BIT_MASK_PLACEHOLDER', str(hex(pow(2,i))))
                register_definition_file.write(temp_txt)
        register_definition_file.write('\n\n')
    for register in registers_without_bits_defs:
        register_definition_file.write('/*DESCRIPTION_PLACEHOLDER*/\n'\
            .replace('DESCRIPTION_PLACEHOLDER', registers_without_bits_defs[register]['register_description']))

        register_definition_file.write(templates['REGISTER_WITHOUT_BITS_DEFS_ADDRESS_ACCESS_TEMPLATE']\
            .replace('REGISTER_NAME_PLACEHOLDER', registers_without_bits_defs[register]['register_name'])\
            .replace('REGISTER_ADDRESS_PLACEHOLDER', registers_without_bits_defs[register]['register_address']))
        register_definition_file.write('\n')

    register_definition_file.write(templates['FILE_GUARD_END']\
        .replace('HEADERFILE_DEF_NAME_PLACEHOLDER', (header_file_name\
            .upper().replace('.', '_')+'_')))