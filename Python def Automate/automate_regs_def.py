import csv
from datetime import date
import time

typedef_template_for_defs_with_bits_defs = '/*NameToBeReplaced Address Access Macro*/\n#define NameToBeReplaced_REG      (*(volatile NameToBeReplaced_reg_type * const)0xAddressToBeReplaced)\n'
typedef_template_for_defs_without_bits_defs = '#define NameToBeReplaced_REG      (*(volatile uint8 * const)0xAddressToBeReplaced)\n'
unions_template = '/*Register: {Name}*/\ntypedef union{{\n\tuint8 Byte;\n\tstruct{{\n\t\tuint8 {Bit0} :1;\n\t\tuint8 {Bit1} :1;\n\t\tuint8 {Bit2} :1;\n\t\t\
uint8 {Bit3} :1;\n\t\tuint8 {Bit4} :1;\n\t\tuint8 {Bit5} :1;\n\t\tuint8 {Bit6} :1;\n\t\tuint8 {Bit7} :1;\n\t}}Bits;\n}}{Name}_reg_type;\n'

alot_of_spaces = '                                                                              '
temp_str = ''

result_file_name = 'sfr_defs_{NOW}.h'.format(NOW = date.today().strftime('%y_%m_%d_') + time.strftime("%H_%M_%S", time.localtime()))

defs_dicts_with_bits_defs = []
defs_dicts_without_bits_defs = []
with open('regs.csv', 'r') as csv_file:
    csv_reader = csv.reader(csv_file)
    next(csv_reader, None)
    for line in csv_reader:
        if len(line) == 10:
            temp_reg = {'Address': line[0].split('$')[1], 'Name': line[1], 'Bit7': line[2],\
                        'Bit6': line[3], 'Bit5': line[4], 'Bit4': line[5], 'Bit3': line[6],\
                            'Bit2': line[7], 'Bit1': line[8], 'Bit0': line[9]}
            defs_dicts_with_bits_defs.append(temp_reg)
        if len(line) == 3:
            temp_reg = {'Address': line[0].split('$')[1], 'Name': line[1], 'description': line[2]}
            defs_dicts_without_bits_defs.append(temp_reg)

with open(result_file_name, 'w') as sfr_defs_update_handler:
    sfr_defs_update_handler.write('/*==========================================================================================\n\
Name        : sfr_defs_update.h\n\
Author      : Amr Gaber\n\
Description : C Header file for the Atmega32\n\
Date        : {DATE}\n\
============================================================================================\*/\n\
#ifndef SFR_DEFS_H_\n\
#define SFR_DEFS_H_\n\n'.format(DATE = date.today().strftime('%d/%m/%Y')))

    sfr_defs_update_handler.write('typedef unsigned char uint8;\n')
    for reg in defs_dicts_with_bits_defs:
        if ((reg['Name'])[0:3] == 'DDR') or ((reg['Name'])[0:4] == 'PORT') or ((reg['Name'])[0:3] == 'PIN'):
            for i in range(0,8):
                # reg['Bit{i}'.format(i=i)] = 'PIN{i}'.format(i = i)
                reg['Bit{i}'.format(i=i)] = 'PIN'+(reg['Bit{i}'.format(i=i)])[(len(reg['Bit{i}'.format(i=i)])-2):len(reg['Bit{i}'.format(i=i)])]
        sfr_defs_update_handler.write(unions_template.format(Name = reg['Name'], Bit0 = reg['Bit0'], Bit1 = reg['Bit1'], Bit2 = reg['Bit2'],\
            Bit3 = reg['Bit3'], Bit4 = reg['Bit4'], Bit5 = reg['Bit5'], Bit6 = reg['Bit6'], Bit7 = reg['Bit7']))
        sfr_defs_update_handler.write(typedef_template_for_defs_with_bits_defs.replace('NameToBeReplaced',\
                    reg['Name']).replace('AddressToBeReplaced' , reg['Address']))
        sfr_defs_update_handler.write('/*{Name} Bit Position Macros*/\n'.format(Name = reg['Name']))
        for i in range(0,8):
            if reg['Bit{i}'.format(i=i)] != '-':
                temp_str = '#define _{register}_{bit}_POSITION'.format(register = reg['Name'], bit = reg['Bit{i}'.format(i=i)])
                temp_str = temp_str + alot_of_spaces
                temp_str = temp_str[0:30] + '0x{i}\n'.format(i = i)
                sfr_defs_update_handler.write(temp_str)

        sfr_defs_update_handler.write('/*{Name} Bit mask Macros*/\n'.format(Name = reg['Name']))
        for i in range(0,8):
            if reg['Bit{i}'.format(i=i)] != '-':
                temp_str = '#define _{register}_{bit}_MASK'.format(register = reg['Name'], bit = reg['Bit{i}'.format(i=i)])
                temp_str = temp_str + alot_of_spaces
                temp_str = temp_str[0:30] + '{i}\n'.format(i = hex(pow(2,i)))
                sfr_defs_update_handler.write(temp_str)
        sfr_defs_update_handler.write('\n\n')

    sfr_defs_update_handler.write('\n')

    for reg in defs_dicts_without_bits_defs:
        sfr_defs_update_handler.write('/*{Description}*/\n'.format(Description = reg['description']))
        sfr_defs_update_handler.write(typedef_template_for_defs_without_bits_defs.replace('NameToBeReplaced',  reg['Name']).replace('AddressToBeReplaced' , reg['Address']) + '\n')


#For Reserved bits remove hyphens
txt = ''
with open(result_file_name, 'r') as sfr_defs_update_handler:
    txt = sfr_defs_update_handler.read()
txt = txt.replace('- ', '')
with open(result_file_name, 'w') as sfr_defs_update_handler:
    sfr_defs_update_handler.write(txt)
    sfr_defs_update_handler.write("#endif /* SFR_DEFS_H_ */")