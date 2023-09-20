/*==========================================================================================
Name        : sfr_defs_update.h
Author      : Amr Gaber
Description : C Header file for the Atmega32
Date        : 20/09/2023
============================================================================================\*/
#ifndef SFR_DEFS_H_
#define SFR_DEFS_H_

typedef unsigned char uint8;
/*Register: SREG*/
typedef union{
	uint8 Byte;
	struct{
		uint8 C :1;
		uint8 Z :1;
		uint8 N :1;
		uint8 V :1;
		uint8 S :1;
		uint8 H :1;
		uint8 T :1;
		uint8 I :1;
	}Bits;
}SREG_reg_type;
/*SREG Address Access Macro*/
#define SREG_REG      (*(volatile SREG_reg_type * const)0x3F)
/*SREG Bit Position Macros*/
#define _SREG_C_POSITION      0x0
#define _SREG_Z_POSITION      0x1
#define _SREG_N_POSITION      0x2
#define _SREG_V_POSITION      0x3
#define _SREG_S_POSITION      0x4
#define _SREG_H_POSITION      0x5
#define _SREG_T_POSITION      0x6
#define _SREG_I_POSITION      0x7
/*SREG Bit mask Macros*/
#define _SREG_C_MASK          0x1
#define _SREG_Z_MASK          0x2
#define _SREG_N_MASK          0x4
#define _SREG_V_MASK          0x8
#define _SREG_S_MASK          0x10
#define _SREG_H_MASK          0x20
#define _SREG_T_MASK          0x40
#define _SREG_I_MASK          0x80


/*Register: SPH*/
typedef union{
	uint8 Byte;
	struct{
		uint8 SP8 :1;
		uint8 SP9 :1;
		uint8 SP10 :1;
		uint8 SP11 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
	}Bits;
}SPH_reg_type;
/*SPH Address Access Macro*/
#define SPH_REG      (*(volatile SPH_reg_type * const)0x3E)
/*SPH Bit Position Macros*/
#define _SPH_SP8_POSITION     0x0
#define _SPH_SP9_POSITION     0x1
#define _SPH_SP10_POSITION    0x2
#define _SPH_SP11_POSITION    0x3
/*SPH Bit mask Macros*/
#define _SPH_SP8_MASK         0x1
#define _SPH_SP9_MASK         0x2
#define _SPH_SP10_MASK        0x4
#define _SPH_SP11_MASK        0x8


/*Register: SPL*/
typedef union{
	uint8 Byte;
	struct{
		uint8 SP0 :1;
		uint8 SP1 :1;
		uint8 SP2 :1;
		uint8 SP3 :1;
		uint8 SP4 :1;
		uint8 SP5 :1;
		uint8 SP6 :1;
		uint8 SP7 :1;
	}Bits;
}SPL_reg_type;
/*SPL Address Access Macro*/
#define SPL_REG      (*(volatile SPL_reg_type * const)0x3D)
/*SPL Bit Position Macros*/
#define _SPL_SP0_POSITION     0x0
#define _SPL_SP1_POSITION     0x1
#define _SPL_SP2_POSITION     0x2
#define _SPL_SP3_POSITION     0x3
#define _SPL_SP4_POSITION     0x4
#define _SPL_SP5_POSITION     0x5
#define _SPL_SP6_POSITION     0x6
#define _SPL_SP7_POSITION     0x7
/*SPL Bit mask Macros*/
#define _SPL_SP0_MASK         0x1
#define _SPL_SP1_MASK         0x2
#define _SPL_SP2_MASK         0x4
#define _SPL_SP3_MASK         0x8
#define _SPL_SP4_MASK         0x10
#define _SPL_SP5_MASK         0x20
#define _SPL_SP6_MASK         0x40
#define _SPL_SP7_MASK         0x80


/*Register: GICR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 IVCE :1;
		uint8 IVSEL :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 INT2 :1;
		uint8 INT0 :1;
		uint8 INT1 :1;
	}Bits;
}GICR_reg_type;
/*GICR Address Access Macro*/
#define GICR_REG      (*(volatile GICR_reg_type * const)0x3B)
/*GICR Bit Position Macros*/
#define _GICR_IVCE_POSITION   0x0
#define _GICR_IVSEL_POSITION  0x1
#define _GICR_INT2_POSITION   0x5
#define _GICR_INT0_POSITION   0x6
#define _GICR_INT1_POSITION   0x7
/*GICR Bit mask Macros*/
#define _GICR_IVCE_MASK       0x1
#define _GICR_IVSEL_MASK      0x2
#define _GICR_INT2_MASK       0x20
#define _GICR_INT0_MASK       0x40
#define _GICR_INT1_MASK       0x80


/*Register: GIFR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 INTF2 :1;
		uint8 INTF0 :1;
		uint8 INTF1 :1;
	}Bits;
}GIFR_reg_type;
/*GIFR Address Access Macro*/
#define GIFR_REG      (*(volatile GIFR_reg_type * const)0x3A)
/*GIFR Bit Position Macros*/
#define _GIFR_INTF2_POSITION  0x5
#define _GIFR_INTF0_POSITION  0x6
#define _GIFR_INTF1_POSITION  0x7
/*GIFR Bit mask Macros*/
#define _GIFR_INTF2_MASK      0x20
#define _GIFR_INTF0_MASK      0x40
#define _GIFR_INTF1_MASK      0x80


/*Register: TIMSK*/
typedef union{
	uint8 Byte;
	struct{
		uint8 TOIE0 :1;
		uint8 OCIE0 :1;
		uint8 TOIE1 :1;
		uint8 OCIE1B :1;
		uint8 OCIE1A :1;
		uint8 TICIE1 :1;
		uint8 TOIE2 :1;
		uint8 OCIE2 :1;
	}Bits;
}TIMSK_reg_type;
/*TIMSK Address Access Macro*/
#define TIMSK_REG      (*(volatile TIMSK_reg_type * const)0x39)
/*TIMSK Bit Position Macros*/
#define _TIMSK_TOIE0_POSITION 0x0
#define _TIMSK_OCIE0_POSITION 0x1
#define _TIMSK_TOIE1_POSITION 0x2
#define _TIMSK_OCIE1B_POSITION0x3
#define _TIMSK_OCIE1A_POSITION0x4
#define _TIMSK_TICIE1_POSITION0x5
#define _TIMSK_TOIE2_POSITION 0x6
#define _TIMSK_OCIE2_POSITION 0x7
/*TIMSK Bit mask Macros*/
#define _TIMSK_TOIE0_MASK     0x1
#define _TIMSK_OCIE0_MASK     0x2
#define _TIMSK_TOIE1_MASK     0x4
#define _TIMSK_OCIE1B_MASK    0x8
#define _TIMSK_OCIE1A_MASK    0x10
#define _TIMSK_TICIE1_MASK    0x20
#define _TIMSK_TOIE2_MASK     0x40
#define _TIMSK_OCIE2_MASK     0x80


/*Register: TIFR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 TOV0 :1;
		uint8 OCF0 :1;
		uint8 TOV1 :1;
		uint8 OCF1B :1;
		uint8 OCF1A :1;
		uint8 ICF1 :1;
		uint8 TOV2 :1;
		uint8 OCF2 :1;
	}Bits;
}TIFR_reg_type;
/*TIFR Address Access Macro*/
#define TIFR_REG      (*(volatile TIFR_reg_type * const)0x38)
/*TIFR Bit Position Macros*/
#define _TIFR_TOV0_POSITION   0x0
#define _TIFR_OCF0_POSITION   0x1
#define _TIFR_TOV1_POSITION   0x2
#define _TIFR_OCF1B_POSITION  0x3
#define _TIFR_OCF1A_POSITION  0x4
#define _TIFR_ICF1_POSITION   0x5
#define _TIFR_TOV2_POSITION   0x6
#define _TIFR_OCF2_POSITION   0x7
/*TIFR Bit mask Macros*/
#define _TIFR_TOV0_MASK       0x1
#define _TIFR_OCF0_MASK       0x2
#define _TIFR_TOV1_MASK       0x4
#define _TIFR_OCF1B_MASK      0x8
#define _TIFR_OCF1A_MASK      0x10
#define _TIFR_ICF1_MASK       0x20
#define _TIFR_TOV2_MASK       0x40
#define _TIFR_OCF2_MASK       0x80


/*Register: SPMCR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 SPMEN :1;
		uint8 PGERS :1;
		uint8 PGWRT :1;
		uint8 BLBSET :1;
		uint8 RWWSRE :1;
		uint8 :1;
		uint8 RWWSB :1;
		uint8 SPMIE :1;
	}Bits;
}SPMCR_reg_type;
/*SPMCR Address Access Macro*/
#define SPMCR_REG      (*(volatile SPMCR_reg_type * const)0x37)
/*SPMCR Bit Position Macros*/
#define _SPMCR_SPMEN_POSITION 0x0
#define _SPMCR_PGERS_POSITION 0x1
#define _SPMCR_PGWRT_POSITION 0x2
#define _SPMCR_BLBSET_POSITION0x3
#define _SPMCR_RWWSRE_POSITION0x4
#define _SPMCR_RWWSB_POSITION 0x6
#define _SPMCR_SPMIE_POSITION 0x7
/*SPMCR Bit mask Macros*/
#define _SPMCR_SPMEN_MASK     0x1
#define _SPMCR_PGERS_MASK     0x2
#define _SPMCR_PGWRT_MASK     0x4
#define _SPMCR_BLBSET_MASK    0x8
#define _SPMCR_RWWSRE_MASK    0x10
#define _SPMCR_RWWSB_MASK     0x40
#define _SPMCR_SPMIE_MASK     0x80


/*Register: TWCR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 TWIE :1;
		uint8 :1;
		uint8 TWEN :1;
		uint8 TWWC :1;
		uint8 TWSTO :1;
		uint8 TWSTA :1;
		uint8 TWEA :1;
		uint8 TWINT :1;
	}Bits;
}TWCR_reg_type;
/*TWCR Address Access Macro*/
#define TWCR_REG      (*(volatile TWCR_reg_type * const)0x36)
/*TWCR Bit Position Macros*/
#define _TWCR_TWIE_POSITION   0x0
#define _TWCR_TWEN_POSITION   0x2
#define _TWCR_TWWC_POSITION   0x3
#define _TWCR_TWSTO_POSITION  0x4
#define _TWCR_TWSTA_POSITION  0x5
#define _TWCR_TWEA_POSITION   0x6
#define _TWCR_TWINT_POSITION  0x7
/*TWCR Bit mask Macros*/
#define _TWCR_TWIE_MASK       0x1
#define _TWCR_TWEN_MASK       0x4
#define _TWCR_TWWC_MASK       0x8
#define _TWCR_TWSTO_MASK      0x10
#define _TWCR_TWSTA_MASK      0x20
#define _TWCR_TWEA_MASK       0x40
#define _TWCR_TWINT_MASK      0x80


/*Register: MCUCR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 ISC00 :1;
		uint8 ISC01 :1;
		uint8 ISC10 :1;
		uint8 ISC11 :1;
		uint8 SM0 :1;
		uint8 SM1 :1;
		uint8 SM2 :1;
		uint8 SE :1;
	}Bits;
}MCUCR_reg_type;
/*MCUCR Address Access Macro*/
#define MCUCR_REG      (*(volatile MCUCR_reg_type * const)0x35)
/*MCUCR Bit Position Macros*/
#define _MCUCR_ISC00_POSITION 0x0
#define _MCUCR_ISC01_POSITION 0x1
#define _MCUCR_ISC10_POSITION 0x2
#define _MCUCR_ISC11_POSITION 0x3
#define _MCUCR_SM0_POSITION   0x4
#define _MCUCR_SM1_POSITION   0x5
#define _MCUCR_SM2_POSITION   0x6
#define _MCUCR_SE_POSITION    0x7
/*MCUCR Bit mask Macros*/
#define _MCUCR_ISC00_MASK     0x1
#define _MCUCR_ISC01_MASK     0x2
#define _MCUCR_ISC10_MASK     0x4
#define _MCUCR_ISC11_MASK     0x8
#define _MCUCR_SM0_MASK       0x10
#define _MCUCR_SM1_MASK       0x20
#define _MCUCR_SM2_MASK       0x40
#define _MCUCR_SE_MASK        0x80


/*Register: MCUCSR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PORF :1;
		uint8 EXTRF :1;
		uint8 BORF :1;
		uint8 WDRF :1;
		uint8 JTRF :1;
		uint8 :1;
		uint8 ISC2 :1;
		uint8 JTD :1;
	}Bits;
}MCUCSR_reg_type;
/*MCUCSR Address Access Macro*/
#define MCUCSR_REG      (*(volatile MCUCSR_reg_type * const)0x34)
/*MCUCSR Bit Position Macros*/
#define _MCUCSR_PORF_POSITION 0x0
#define _MCUCSR_EXTRF_POSITION0x1
#define _MCUCSR_BORF_POSITION 0x2
#define _MCUCSR_WDRF_POSITION 0x3
#define _MCUCSR_JTRF_POSITION 0x4
#define _MCUCSR_ISC2_POSITION 0x6
#define _MCUCSR_JTD_POSITION  0x7
/*MCUCSR Bit mask Macros*/
#define _MCUCSR_PORF_MASK     0x1
#define _MCUCSR_EXTRF_MASK    0x2
#define _MCUCSR_BORF_MASK     0x4
#define _MCUCSR_WDRF_MASK     0x8
#define _MCUCSR_JTRF_MASK     0x10
#define _MCUCSR_ISC2_MASK     0x40
#define _MCUCSR_JTD_MASK      0x80


/*Register: TCCR0*/
typedef union{
	uint8 Byte;
	struct{
		uint8 CS00 :1;
		uint8 CS01 :1;
		uint8 CS02 :1;
		uint8 WGM01 :1;
		uint8 COM00 :1;
		uint8 COM01 :1;
		uint8 WGM00 :1;
		uint8 FOC0 :1;
	}Bits;
}TCCR0_reg_type;
/*TCCR0 Address Access Macro*/
#define TCCR0_REG      (*(volatile TCCR0_reg_type * const)0x33)
/*TCCR0 Bit Position Macros*/
#define _TCCR0_CS00_POSITION  0x0
#define _TCCR0_CS01_POSITION  0x1
#define _TCCR0_CS02_POSITION  0x2
#define _TCCR0_WGM01_POSITION 0x3
#define _TCCR0_COM00_POSITION 0x4
#define _TCCR0_COM01_POSITION 0x5
#define _TCCR0_WGM00_POSITION 0x6
#define _TCCR0_FOC0_POSITION  0x7
/*TCCR0 Bit mask Macros*/
#define _TCCR0_CS00_MASK      0x1
#define _TCCR0_CS01_MASK      0x2
#define _TCCR0_CS02_MASK      0x4
#define _TCCR0_WGM01_MASK     0x8
#define _TCCR0_COM00_MASK     0x10
#define _TCCR0_COM01_MASK     0x20
#define _TCCR0_WGM00_MASK     0x40
#define _TCCR0_FOC0_MASK      0x80


/*Register: SFIOR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PSR10 :1;
		uint8 PSR2 :1;
		uint8 PUD :1;
		uint8 ACME :1;
		uint8 :1;
		uint8 ADTS0 :1;
		uint8 ADTS1 :1;
		uint8 ADTS2 :1;
	}Bits;
}SFIOR_reg_type;
/*SFIOR Address Access Macro*/
#define SFIOR_REG      (*(volatile SFIOR_reg_type * const)0x30)
/*SFIOR Bit Position Macros*/
#define _SFIOR_PSR10_POSITION 0x0
#define _SFIOR_PSR2_POSITION  0x1
#define _SFIOR_PUD_POSITION   0x2
#define _SFIOR_ACME_POSITION  0x3
#define _SFIOR_ADTS0_POSITION 0x5
#define _SFIOR_ADTS1_POSITION 0x6
#define _SFIOR_ADTS2_POSITION 0x7
/*SFIOR Bit mask Macros*/
#define _SFIOR_PSR10_MASK     0x1
#define _SFIOR_PSR2_MASK      0x2
#define _SFIOR_PUD_MASK       0x4
#define _SFIOR_ACME_MASK      0x8
#define _SFIOR_ADTS0_MASK     0x20
#define _SFIOR_ADTS1_MASK     0x40
#define _SFIOR_ADTS2_MASK     0x80


/*Register: TCCR1A*/
typedef union{
	uint8 Byte;
	struct{
		uint8 WGM10 :1;
		uint8 WGM11 :1;
		uint8 FOC1B :1;
		uint8 FOC1A :1;
		uint8 COM1B0 :1;
		uint8 COM1B1 :1;
		uint8 COM1A0 :1;
		uint8 COM1A1 :1;
	}Bits;
}TCCR1A_reg_type;
/*TCCR1A Address Access Macro*/
#define TCCR1A_REG      (*(volatile TCCR1A_reg_type * const)0x2F)
/*TCCR1A Bit Position Macros*/
#define _TCCR1A_WGM10_POSITION0x0
#define _TCCR1A_WGM11_POSITION0x1
#define _TCCR1A_FOC1B_POSITION0x2
#define _TCCR1A_FOC1A_POSITION0x3
#define _TCCR1A_COM1B0_POSITIO0x4
#define _TCCR1A_COM1B1_POSITIO0x5
#define _TCCR1A_COM1A0_POSITIO0x6
#define _TCCR1A_COM1A1_POSITIO0x7
/*TCCR1A Bit mask Macros*/
#define _TCCR1A_WGM10_MASK    0x1
#define _TCCR1A_WGM11_MASK    0x2
#define _TCCR1A_FOC1B_MASK    0x4
#define _TCCR1A_FOC1A_MASK    0x8
#define _TCCR1A_COM1B0_MASK   0x10
#define _TCCR1A_COM1B1_MASK   0x20
#define _TCCR1A_COM1A0_MASK   0x40
#define _TCCR1A_COM1A1_MASK   0x80


/*Register: TCCR1B*/
typedef union{
	uint8 Byte;
	struct{
		uint8 CS10 :1;
		uint8 CS11 :1;
		uint8 CS12 :1;
		uint8 WGM12 :1;
		uint8 WGM13 :1;
		uint8 :1;
		uint8 ICES1 :1;
		uint8 ICNC1 :1;
	}Bits;
}TCCR1B_reg_type;
/*TCCR1B Address Access Macro*/
#define TCCR1B_REG      (*(volatile TCCR1B_reg_type * const)0x2E)
/*TCCR1B Bit Position Macros*/
#define _TCCR1B_CS10_POSITION 0x0
#define _TCCR1B_CS11_POSITION 0x1
#define _TCCR1B_CS12_POSITION 0x2
#define _TCCR1B_WGM12_POSITION0x3
#define _TCCR1B_WGM13_POSITION0x4
#define _TCCR1B_ICES1_POSITION0x6
#define _TCCR1B_ICNC1_POSITION0x7
/*TCCR1B Bit mask Macros*/
#define _TCCR1B_CS10_MASK     0x1
#define _TCCR1B_CS11_MASK     0x2
#define _TCCR1B_CS12_MASK     0x4
#define _TCCR1B_WGM12_MASK    0x8
#define _TCCR1B_WGM13_MASK    0x10
#define _TCCR1B_ICES1_MASK    0x40
#define _TCCR1B_ICNC1_MASK    0x80


/*Register: TCCR2*/
typedef union{
	uint8 Byte;
	struct{
		uint8 CS20 :1;
		uint8 CS21 :1;
		uint8 CS22 :1;
		uint8 WGM21 :1;
		uint8 COM20 :1;
		uint8 COM21 :1;
		uint8 WGM20 :1;
		uint8 FOC2 :1;
	}Bits;
}TCCR2_reg_type;
/*TCCR2 Address Access Macro*/
#define TCCR2_REG      (*(volatile TCCR2_reg_type * const)0x25)
/*TCCR2 Bit Position Macros*/
#define _TCCR2_CS20_POSITION  0x0
#define _TCCR2_CS21_POSITION  0x1
#define _TCCR2_CS22_POSITION  0x2
#define _TCCR2_WGM21_POSITION 0x3
#define _TCCR2_COM20_POSITION 0x4
#define _TCCR2_COM21_POSITION 0x5
#define _TCCR2_WGM20_POSITION 0x6
#define _TCCR2_FOC2_POSITION  0x7
/*TCCR2 Bit mask Macros*/
#define _TCCR2_CS20_MASK      0x1
#define _TCCR2_CS21_MASK      0x2
#define _TCCR2_CS22_MASK      0x4
#define _TCCR2_WGM21_MASK     0x8
#define _TCCR2_COM20_MASK     0x10
#define _TCCR2_COM21_MASK     0x20
#define _TCCR2_WGM20_MASK     0x40
#define _TCCR2_FOC2_MASK      0x80


/*Register: ASSR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 TCR2UB :1;
		uint8 OCR2UB :1;
		uint8 TCN2UB :1;
		uint8 AS2 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
	}Bits;
}ASSR_reg_type;
/*ASSR Address Access Macro*/
#define ASSR_REG      (*(volatile ASSR_reg_type * const)0x22)
/*ASSR Bit Position Macros*/
#define _ASSR_TCR2UB_POSITION 0x0
#define _ASSR_OCR2UB_POSITION 0x1
#define _ASSR_TCN2UB_POSITION 0x2
#define _ASSR_AS2_POSITION    0x3
/*ASSR Bit mask Macros*/
#define _ASSR_TCR2UB_MASK     0x1
#define _ASSR_OCR2UB_MASK     0x2
#define _ASSR_TCN2UB_MASK     0x4
#define _ASSR_AS2_MASK        0x8


/*Register: WDTCR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 WDP0 :1;
		uint8 WDP1 :1;
		uint8 WDP2 :1;
		uint8 WDE :1;
		uint8 WDTOE :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
	}Bits;
}WDTCR_reg_type;
/*WDTCR Address Access Macro*/
#define WDTCR_REG      (*(volatile WDTCR_reg_type * const)0x21)
/*WDTCR Bit Position Macros*/
#define _WDTCR_WDP0_POSITION  0x0
#define _WDTCR_WDP1_POSITION  0x1
#define _WDTCR_WDP2_POSITION  0x2
#define _WDTCR_WDE_POSITION   0x3
#define _WDTCR_WDTOE_POSITION 0x4
/*WDTCR Bit mask Macros*/
#define _WDTCR_WDP0_MASK      0x1
#define _WDTCR_WDP1_MASK      0x2
#define _WDTCR_WDP2_MASK      0x4
#define _WDTCR_WDE_MASK       0x8
#define _WDTCR_WDTOE_MASK     0x10


/*Register: UBRRH*/
typedef union{
	uint8 Byte;
	struct{
		uint8 UBRR8 :1;
		uint8 UBRR9 :1;
		uint8 UBRR10 :1;
		uint8 UBRR11 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 URSEL :1;
	}Bits;
}UBRRH_reg_type;
/*UBRRH Address Access Macro*/
#define UBRRH_REG      (*(volatile UBRRH_reg_type * const)0x20)
/*UBRRH Bit Position Macros*/
#define _UBRRH_UBRR8_POSITION 0x0
#define _UBRRH_UBRR9_POSITION 0x1
#define _UBRRH_UBRR10_POSITION0x2
#define _UBRRH_UBRR11_POSITION0x3
#define _UBRRH_URSEL_POSITION 0x7
/*UBRRH Bit mask Macros*/
#define _UBRRH_UBRR8_MASK     0x1
#define _UBRRH_UBRR9_MASK     0x2
#define _UBRRH_UBRR10_MASK    0x4
#define _UBRRH_UBRR11_MASK    0x8
#define _UBRRH_URSEL_MASK     0x80


/*Register: UCSRC*/
typedef union{
	uint8 Byte;
	struct{
		uint8 UCPOL :1;
		uint8 UCSZ0 :1;
		uint8 UCSZ1 :1;
		uint8 USBS :1;
		uint8 UPM0 :1;
		uint8 UPM1 :1;
		uint8 UMSEL :1;
		uint8 URSEL :1;
	}Bits;
}UCSRC_reg_type;
/*UCSRC Address Access Macro*/
#define UCSRC_REG      (*(volatile UCSRC_reg_type * const)0x20)
/*UCSRC Bit Position Macros*/
#define _UCSRC_UCPOL_POSITION 0x0
#define _UCSRC_UCSZ0_POSITION 0x1
#define _UCSRC_UCSZ1_POSITION 0x2
#define _UCSRC_USBS_POSITION  0x3
#define _UCSRC_UPM0_POSITION  0x4
#define _UCSRC_UPM1_POSITION  0x5
#define _UCSRC_UMSEL_POSITION 0x6
#define _UCSRC_URSEL_POSITION 0x7
/*UCSRC Bit mask Macros*/
#define _UCSRC_UCPOL_MASK     0x1
#define _UCSRC_UCSZ0_MASK     0x2
#define _UCSRC_UCSZ1_MASK     0x4
#define _UCSRC_USBS_MASK      0x8
#define _UCSRC_UPM0_MASK      0x10
#define _UCSRC_UPM1_MASK      0x20
#define _UCSRC_UMSEL_MASK     0x40
#define _UCSRC_URSEL_MASK     0x80


/*Register: EEARH*/
typedef union{
	uint8 Byte;
	struct{
		uint8 EEAR8 :1;
		uint8 EEAR9 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
	}Bits;
}EEARH_reg_type;
/*EEARH Address Access Macro*/
#define EEARH_REG      (*(volatile EEARH_reg_type * const)0x1F)
/*EEARH Bit Position Macros*/
#define _EEARH_EEAR8_POSITION 0x0
#define _EEARH_EEAR9_POSITION 0x1
/*EEARH Bit mask Macros*/
#define _EEARH_EEAR8_MASK     0x1
#define _EEARH_EEAR9_MASK     0x2


/*Register: EECR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 EERE :1;
		uint8 EEWE :1;
		uint8 EEMWE :1;
		uint8 EERIE :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
	}Bits;
}EECR_reg_type;
/*EECR Address Access Macro*/
#define EECR_REG      (*(volatile EECR_reg_type * const)0x1C)
/*EECR Bit Position Macros*/
#define _EECR_EERE_POSITION   0x0
#define _EECR_EEWE_POSITION   0x1
#define _EECR_EEMWE_POSITION  0x2
#define _EECR_EERIE_POSITION  0x3
/*EECR Bit mask Macros*/
#define _EECR_EERE_MASK       0x1
#define _EECR_EEWE_MASK       0x2
#define _EECR_EEMWE_MASK      0x4
#define _EECR_EERIE_MASK      0x8


/*Register: PORTA*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINA0 :1;
		uint8 PINA1 :1;
		uint8 PINA2 :1;
		uint8 PINA3 :1;
		uint8 PINA4 :1;
		uint8 PINA5 :1;
		uint8 PINA6 :1;
		uint8 PINA7 :1;
	}Bits;
}PORTA_reg_type;
/*PORTA Address Access Macro*/
#define PORTA_REG      (*(volatile PORTA_reg_type * const)0x1B)
/*PORTA Bit Position Macros*/
#define _PORTA_PINA0_POSITION 0x0
#define _PORTA_PINA1_POSITION 0x1
#define _PORTA_PINA2_POSITION 0x2
#define _PORTA_PINA3_POSITION 0x3
#define _PORTA_PINA4_POSITION 0x4
#define _PORTA_PINA5_POSITION 0x5
#define _PORTA_PINA6_POSITION 0x6
#define _PORTA_PINA7_POSITION 0x7
/*PORTA Bit mask Macros*/
#define _PORTA_PINA0_MASK     0x1
#define _PORTA_PINA1_MASK     0x2
#define _PORTA_PINA2_MASK     0x4
#define _PORTA_PINA3_MASK     0x8
#define _PORTA_PINA4_MASK     0x10
#define _PORTA_PINA5_MASK     0x20
#define _PORTA_PINA6_MASK     0x40
#define _PORTA_PINA7_MASK     0x80


/*Register: DDRA*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINA0 :1;
		uint8 PINA1 :1;
		uint8 PINA2 :1;
		uint8 PINA3 :1;
		uint8 PINA4 :1;
		uint8 PINA5 :1;
		uint8 PINA6 :1;
		uint8 PINA7 :1;
	}Bits;
}DDRA_reg_type;
/*DDRA Address Access Macro*/
#define DDRA_REG      (*(volatile DDRA_reg_type * const)0x1A)
/*DDRA Bit Position Macros*/
#define _DDRA_PINA0_POSITION  0x0
#define _DDRA_PINA1_POSITION  0x1
#define _DDRA_PINA2_POSITION  0x2
#define _DDRA_PINA3_POSITION  0x3
#define _DDRA_PINA4_POSITION  0x4
#define _DDRA_PINA5_POSITION  0x5
#define _DDRA_PINA6_POSITION  0x6
#define _DDRA_PINA7_POSITION  0x7
/*DDRA Bit mask Macros*/
#define _DDRA_PINA0_MASK      0x1
#define _DDRA_PINA1_MASK      0x2
#define _DDRA_PINA2_MASK      0x4
#define _DDRA_PINA3_MASK      0x8
#define _DDRA_PINA4_MASK      0x10
#define _DDRA_PINA5_MASK      0x20
#define _DDRA_PINA6_MASK      0x40
#define _DDRA_PINA7_MASK      0x80


/*Register: PINA*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINA0 :1;
		uint8 PINA1 :1;
		uint8 PINA2 :1;
		uint8 PINA3 :1;
		uint8 PINA4 :1;
		uint8 PINA5 :1;
		uint8 PINA6 :1;
		uint8 PINA7 :1;
	}Bits;
}PINA_reg_type;
/*PINA Address Access Macro*/
#define PINA_REG      (*(volatile PINA_reg_type * const)0x19)
/*PINA Bit Position Macros*/
#define _PINA_PINA0_POSITION  0x0
#define _PINA_PINA1_POSITION  0x1
#define _PINA_PINA2_POSITION  0x2
#define _PINA_PINA3_POSITION  0x3
#define _PINA_PINA4_POSITION  0x4
#define _PINA_PINA5_POSITION  0x5
#define _PINA_PINA6_POSITION  0x6
#define _PINA_PINA7_POSITION  0x7
/*PINA Bit mask Macros*/
#define _PINA_PINA0_MASK      0x1
#define _PINA_PINA1_MASK      0x2
#define _PINA_PINA2_MASK      0x4
#define _PINA_PINA3_MASK      0x8
#define _PINA_PINA4_MASK      0x10
#define _PINA_PINA5_MASK      0x20
#define _PINA_PINA6_MASK      0x40
#define _PINA_PINA7_MASK      0x80


/*Register: PORTB*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINB0 :1;
		uint8 PINB1 :1;
		uint8 PINB2 :1;
		uint8 PINB3 :1;
		uint8 PINB4 :1;
		uint8 PINB5 :1;
		uint8 PINB6 :1;
		uint8 PINB7 :1;
	}Bits;
}PORTB_reg_type;
/*PORTB Address Access Macro*/
#define PORTB_REG      (*(volatile PORTB_reg_type * const)0x18)
/*PORTB Bit Position Macros*/
#define _PORTB_PINB0_POSITION 0x0
#define _PORTB_PINB1_POSITION 0x1
#define _PORTB_PINB2_POSITION 0x2
#define _PORTB_PINB3_POSITION 0x3
#define _PORTB_PINB4_POSITION 0x4
#define _PORTB_PINB5_POSITION 0x5
#define _PORTB_PINB6_POSITION 0x6
#define _PORTB_PINB7_POSITION 0x7
/*PORTB Bit mask Macros*/
#define _PORTB_PINB0_MASK     0x1
#define _PORTB_PINB1_MASK     0x2
#define _PORTB_PINB2_MASK     0x4
#define _PORTB_PINB3_MASK     0x8
#define _PORTB_PINB4_MASK     0x10
#define _PORTB_PINB5_MASK     0x20
#define _PORTB_PINB6_MASK     0x40
#define _PORTB_PINB7_MASK     0x80


/*Register: DDRB*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINB0 :1;
		uint8 PINB1 :1;
		uint8 PINB2 :1;
		uint8 PINB3 :1;
		uint8 PINB4 :1;
		uint8 PINB5 :1;
		uint8 PINB6 :1;
		uint8 PINB7 :1;
	}Bits;
}DDRB_reg_type;
/*DDRB Address Access Macro*/
#define DDRB_REG      (*(volatile DDRB_reg_type * const)0x17)
/*DDRB Bit Position Macros*/
#define _DDRB_PINB0_POSITION  0x0
#define _DDRB_PINB1_POSITION  0x1
#define _DDRB_PINB2_POSITION  0x2
#define _DDRB_PINB3_POSITION  0x3
#define _DDRB_PINB4_POSITION  0x4
#define _DDRB_PINB5_POSITION  0x5
#define _DDRB_PINB6_POSITION  0x6
#define _DDRB_PINB7_POSITION  0x7
/*DDRB Bit mask Macros*/
#define _DDRB_PINB0_MASK      0x1
#define _DDRB_PINB1_MASK      0x2
#define _DDRB_PINB2_MASK      0x4
#define _DDRB_PINB3_MASK      0x8
#define _DDRB_PINB4_MASK      0x10
#define _DDRB_PINB5_MASK      0x20
#define _DDRB_PINB6_MASK      0x40
#define _DDRB_PINB7_MASK      0x80


/*Register: PINB*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINB0 :1;
		uint8 PINB1 :1;
		uint8 PINB2 :1;
		uint8 PINB3 :1;
		uint8 PINB4 :1;
		uint8 PINB5 :1;
		uint8 PINB6 :1;
		uint8 PINB7 :1;
	}Bits;
}PINB_reg_type;
/*PINB Address Access Macro*/
#define PINB_REG      (*(volatile PINB_reg_type * const)0x16)
/*PINB Bit Position Macros*/
#define _PINB_PINB0_POSITION  0x0
#define _PINB_PINB1_POSITION  0x1
#define _PINB_PINB2_POSITION  0x2
#define _PINB_PINB3_POSITION  0x3
#define _PINB_PINB4_POSITION  0x4
#define _PINB_PINB5_POSITION  0x5
#define _PINB_PINB6_POSITION  0x6
#define _PINB_PINB7_POSITION  0x7
/*PINB Bit mask Macros*/
#define _PINB_PINB0_MASK      0x1
#define _PINB_PINB1_MASK      0x2
#define _PINB_PINB2_MASK      0x4
#define _PINB_PINB3_MASK      0x8
#define _PINB_PINB4_MASK      0x10
#define _PINB_PINB5_MASK      0x20
#define _PINB_PINB6_MASK      0x40
#define _PINB_PINB7_MASK      0x80


/*Register: PORTC*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINC0 :1;
		uint8 PINC1 :1;
		uint8 PINC2 :1;
		uint8 PINC3 :1;
		uint8 PINC4 :1;
		uint8 PINC5 :1;
		uint8 PINC6 :1;
		uint8 PINC7 :1;
	}Bits;
}PORTC_reg_type;
/*PORTC Address Access Macro*/
#define PORTC_REG      (*(volatile PORTC_reg_type * const)0x15)
/*PORTC Bit Position Macros*/
#define _PORTC_PINC0_POSITION 0x0
#define _PORTC_PINC1_POSITION 0x1
#define _PORTC_PINC2_POSITION 0x2
#define _PORTC_PINC3_POSITION 0x3
#define _PORTC_PINC4_POSITION 0x4
#define _PORTC_PINC5_POSITION 0x5
#define _PORTC_PINC6_POSITION 0x6
#define _PORTC_PINC7_POSITION 0x7
/*PORTC Bit mask Macros*/
#define _PORTC_PINC0_MASK     0x1
#define _PORTC_PINC1_MASK     0x2
#define _PORTC_PINC2_MASK     0x4
#define _PORTC_PINC3_MASK     0x8
#define _PORTC_PINC4_MASK     0x10
#define _PORTC_PINC5_MASK     0x20
#define _PORTC_PINC6_MASK     0x40
#define _PORTC_PINC7_MASK     0x80


/*Register: DDRC*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINC0 :1;
		uint8 PINC1 :1;
		uint8 PINC2 :1;
		uint8 PINC3 :1;
		uint8 PINC4 :1;
		uint8 PINC5 :1;
		uint8 PINC6 :1;
		uint8 PINC7 :1;
	}Bits;
}DDRC_reg_type;
/*DDRC Address Access Macro*/
#define DDRC_REG      (*(volatile DDRC_reg_type * const)0x14)
/*DDRC Bit Position Macros*/
#define _DDRC_PINC0_POSITION  0x0
#define _DDRC_PINC1_POSITION  0x1
#define _DDRC_PINC2_POSITION  0x2
#define _DDRC_PINC3_POSITION  0x3
#define _DDRC_PINC4_POSITION  0x4
#define _DDRC_PINC5_POSITION  0x5
#define _DDRC_PINC6_POSITION  0x6
#define _DDRC_PINC7_POSITION  0x7
/*DDRC Bit mask Macros*/
#define _DDRC_PINC0_MASK      0x1
#define _DDRC_PINC1_MASK      0x2
#define _DDRC_PINC2_MASK      0x4
#define _DDRC_PINC3_MASK      0x8
#define _DDRC_PINC4_MASK      0x10
#define _DDRC_PINC5_MASK      0x20
#define _DDRC_PINC6_MASK      0x40
#define _DDRC_PINC7_MASK      0x80


/*Register: PINC*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PINC0 :1;
		uint8 PINC1 :1;
		uint8 PINC2 :1;
		uint8 PINC3 :1;
		uint8 PINC4 :1;
		uint8 PINC5 :1;
		uint8 PINC6 :1;
		uint8 PINC7 :1;
	}Bits;
}PINC_reg_type;
/*PINC Address Access Macro*/
#define PINC_REG      (*(volatile PINC_reg_type * const)0x13)
/*PINC Bit Position Macros*/
#define _PINC_PINC0_POSITION  0x0
#define _PINC_PINC1_POSITION  0x1
#define _PINC_PINC2_POSITION  0x2
#define _PINC_PINC3_POSITION  0x3
#define _PINC_PINC4_POSITION  0x4
#define _PINC_PINC5_POSITION  0x5
#define _PINC_PINC6_POSITION  0x6
#define _PINC_PINC7_POSITION  0x7
/*PINC Bit mask Macros*/
#define _PINC_PINC0_MASK      0x1
#define _PINC_PINC1_MASK      0x2
#define _PINC_PINC2_MASK      0x4
#define _PINC_PINC3_MASK      0x8
#define _PINC_PINC4_MASK      0x10
#define _PINC_PINC5_MASK      0x20
#define _PINC_PINC6_MASK      0x40
#define _PINC_PINC7_MASK      0x80


/*Register: PORTD*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PIND0 :1;
		uint8 PIND1 :1;
		uint8 PIND2 :1;
		uint8 PIND3 :1;
		uint8 PIND4 :1;
		uint8 PIND5 :1;
		uint8 PIND6 :1;
		uint8 PIND7 :1;
	}Bits;
}PORTD_reg_type;
/*PORTD Address Access Macro*/
#define PORTD_REG      (*(volatile PORTD_reg_type * const)0x12)
/*PORTD Bit Position Macros*/
#define _PORTD_PIND0_POSITION 0x0
#define _PORTD_PIND1_POSITION 0x1
#define _PORTD_PIND2_POSITION 0x2
#define _PORTD_PIND3_POSITION 0x3
#define _PORTD_PIND4_POSITION 0x4
#define _PORTD_PIND5_POSITION 0x5
#define _PORTD_PIND6_POSITION 0x6
#define _PORTD_PIND7_POSITION 0x7
/*PORTD Bit mask Macros*/
#define _PORTD_PIND0_MASK     0x1
#define _PORTD_PIND1_MASK     0x2
#define _PORTD_PIND2_MASK     0x4
#define _PORTD_PIND3_MASK     0x8
#define _PORTD_PIND4_MASK     0x10
#define _PORTD_PIND5_MASK     0x20
#define _PORTD_PIND6_MASK     0x40
#define _PORTD_PIND7_MASK     0x80


/*Register: DDRD*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PIND0 :1;
		uint8 PIND1 :1;
		uint8 PIND2 :1;
		uint8 PIND3 :1;
		uint8 PIND4 :1;
		uint8 PIND5 :1;
		uint8 PIND6 :1;
		uint8 PIND7 :1;
	}Bits;
}DDRD_reg_type;
/*DDRD Address Access Macro*/
#define DDRD_REG      (*(volatile DDRD_reg_type * const)0x11)
/*DDRD Bit Position Macros*/
#define _DDRD_PIND0_POSITION  0x0
#define _DDRD_PIND1_POSITION  0x1
#define _DDRD_PIND2_POSITION  0x2
#define _DDRD_PIND3_POSITION  0x3
#define _DDRD_PIND4_POSITION  0x4
#define _DDRD_PIND5_POSITION  0x5
#define _DDRD_PIND6_POSITION  0x6
#define _DDRD_PIND7_POSITION  0x7
/*DDRD Bit mask Macros*/
#define _DDRD_PIND0_MASK      0x1
#define _DDRD_PIND1_MASK      0x2
#define _DDRD_PIND2_MASK      0x4
#define _DDRD_PIND3_MASK      0x8
#define _DDRD_PIND4_MASK      0x10
#define _DDRD_PIND5_MASK      0x20
#define _DDRD_PIND6_MASK      0x40
#define _DDRD_PIND7_MASK      0x80


/*Register: PIND*/
typedef union{
	uint8 Byte;
	struct{
		uint8 PIND0 :1;
		uint8 PIND1 :1;
		uint8 PIND2 :1;
		uint8 PIND3 :1;
		uint8 PIND4 :1;
		uint8 PIND5 :1;
		uint8 PIND6 :1;
		uint8 PIND7 :1;
	}Bits;
}PIND_reg_type;
/*PIND Address Access Macro*/
#define PIND_REG      (*(volatile PIND_reg_type * const)0x10)
/*PIND Bit Position Macros*/
#define _PIND_PIND0_POSITION  0x0
#define _PIND_PIND1_POSITION  0x1
#define _PIND_PIND2_POSITION  0x2
#define _PIND_PIND3_POSITION  0x3
#define _PIND_PIND4_POSITION  0x4
#define _PIND_PIND5_POSITION  0x5
#define _PIND_PIND6_POSITION  0x6
#define _PIND_PIND7_POSITION  0x7
/*PIND Bit mask Macros*/
#define _PIND_PIND0_MASK      0x1
#define _PIND_PIND1_MASK      0x2
#define _PIND_PIND2_MASK      0x4
#define _PIND_PIND3_MASK      0x8
#define _PIND_PIND4_MASK      0x10
#define _PIND_PIND5_MASK      0x20
#define _PIND_PIND6_MASK      0x40
#define _PIND_PIND7_MASK      0x80


/*Register: SPSR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 SPI2X :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 :1;
		uint8 WCOL :1;
		uint8 SPIF :1;
	}Bits;
}SPSR_reg_type;
/*SPSR Address Access Macro*/
#define SPSR_REG      (*(volatile SPSR_reg_type * const)0x0E)
/*SPSR Bit Position Macros*/
#define _SPSR_SPI2X_POSITION  0x0
#define _SPSR_WCOL_POSITION   0x6
#define _SPSR_SPIF_POSITION   0x7
/*SPSR Bit mask Macros*/
#define _SPSR_SPI2X_MASK      0x1
#define _SPSR_WCOL_MASK       0x40
#define _SPSR_SPIF_MASK       0x80


/*Register: SPCR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 SPR0 :1;
		uint8 SPR1 :1;
		uint8 CPHA :1;
		uint8 CPOL :1;
		uint8 MSTR :1;
		uint8 DORD :1;
		uint8 SPE :1;
		uint8 SPIE :1;
	}Bits;
}SPCR_reg_type;
/*SPCR Address Access Macro*/
#define SPCR_REG      (*(volatile SPCR_reg_type * const)0x0D)
/*SPCR Bit Position Macros*/
#define _SPCR_SPR0_POSITION   0x0
#define _SPCR_SPR1_POSITION   0x1
#define _SPCR_CPHA_POSITION   0x2
#define _SPCR_CPOL_POSITION   0x3
#define _SPCR_MSTR_POSITION   0x4
#define _SPCR_DORD_POSITION   0x5
#define _SPCR_SPE_POSITION    0x6
#define _SPCR_SPIE_POSITION   0x7
/*SPCR Bit mask Macros*/
#define _SPCR_SPR0_MASK       0x1
#define _SPCR_SPR1_MASK       0x2
#define _SPCR_CPHA_MASK       0x4
#define _SPCR_CPOL_MASK       0x8
#define _SPCR_MSTR_MASK       0x10
#define _SPCR_DORD_MASK       0x20
#define _SPCR_SPE_MASK        0x40
#define _SPCR_SPIE_MASK       0x80


/*Register: UCSRA*/
typedef union{
	uint8 Byte;
	struct{
		uint8 MPCM :1;
		uint8 U2X :1;
		uint8 PE :1;
		uint8 DOR :1;
		uint8 FE :1;
		uint8 UDRE :1;
		uint8 TXC :1;
		uint8 RXC :1;
	}Bits;
}UCSRA_reg_type;
/*UCSRA Address Access Macro*/
#define UCSRA_REG      (*(volatile UCSRA_reg_type * const)0x0B)
/*UCSRA Bit Position Macros*/
#define _UCSRA_MPCM_POSITION  0x0
#define _UCSRA_U2X_POSITION   0x1
#define _UCSRA_PE_POSITION    0x2
#define _UCSRA_DOR_POSITION   0x3
#define _UCSRA_FE_POSITION    0x4
#define _UCSRA_UDRE_POSITION  0x5
#define _UCSRA_TXC_POSITION   0x6
#define _UCSRA_RXC_POSITION   0x7
/*UCSRA Bit mask Macros*/
#define _UCSRA_MPCM_MASK      0x1
#define _UCSRA_U2X_MASK       0x2
#define _UCSRA_PE_MASK        0x4
#define _UCSRA_DOR_MASK       0x8
#define _UCSRA_FE_MASK        0x10
#define _UCSRA_UDRE_MASK      0x20
#define _UCSRA_TXC_MASK       0x40
#define _UCSRA_RXC_MASK       0x80


/*Register: UCSRB*/
typedef union{
	uint8 Byte;
	struct{
		uint8 TXB8 :1;
		uint8 RXB8 :1;
		uint8 UCSZ2 :1;
		uint8 TXEN :1;
		uint8 RXEN :1;
		uint8 UDRIE :1;
		uint8 TXCIE :1;
		uint8 RXCIE :1;
	}Bits;
}UCSRB_reg_type;
/*UCSRB Address Access Macro*/
#define UCSRB_REG      (*(volatile UCSRB_reg_type * const)0x0A)
/*UCSRB Bit Position Macros*/
#define _UCSRB_TXB8_POSITION  0x0
#define _UCSRB_RXB8_POSITION  0x1
#define _UCSRB_UCSZ2_POSITION 0x2
#define _UCSRB_TXEN_POSITION  0x3
#define _UCSRB_RXEN_POSITION  0x4
#define _UCSRB_UDRIE_POSITION 0x5
#define _UCSRB_TXCIE_POSITION 0x6
#define _UCSRB_RXCIE_POSITION 0x7
/*UCSRB Bit mask Macros*/
#define _UCSRB_TXB8_MASK      0x1
#define _UCSRB_RXB8_MASK      0x2
#define _UCSRB_UCSZ2_MASK     0x4
#define _UCSRB_TXEN_MASK      0x8
#define _UCSRB_RXEN_MASK      0x10
#define _UCSRB_UDRIE_MASK     0x20
#define _UCSRB_TXCIE_MASK     0x40
#define _UCSRB_RXCIE_MASK     0x80


/*Register: ACSR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 ACIS0 :1;
		uint8 ACIS1 :1;
		uint8 ACIC :1;
		uint8 ACIE :1;
		uint8 ACI :1;
		uint8 ACO :1;
		uint8 ACBG :1;
		uint8 ACD :1;
	}Bits;
}ACSR_reg_type;
/*ACSR Address Access Macro*/
#define ACSR_REG      (*(volatile ACSR_reg_type * const)0x08)
/*ACSR Bit Position Macros*/
#define _ACSR_ACIS0_POSITION  0x0
#define _ACSR_ACIS1_POSITION  0x1
#define _ACSR_ACIC_POSITION   0x2
#define _ACSR_ACIE_POSITION   0x3
#define _ACSR_ACI_POSITION    0x4
#define _ACSR_ACO_POSITION    0x5
#define _ACSR_ACBG_POSITION   0x6
#define _ACSR_ACD_POSITION    0x7
/*ACSR Bit mask Macros*/
#define _ACSR_ACIS0_MASK      0x1
#define _ACSR_ACIS1_MASK      0x2
#define _ACSR_ACIC_MASK       0x4
#define _ACSR_ACIE_MASK       0x8
#define _ACSR_ACI_MASK        0x10
#define _ACSR_ACO_MASK        0x20
#define _ACSR_ACBG_MASK       0x40
#define _ACSR_ACD_MASK        0x80


/*Register: ADMUX*/
typedef union{
	uint8 Byte;
	struct{
		uint8 MUX0 :1;
		uint8 MUX1 :1;
		uint8 MUX2 :1;
		uint8 MUX3 :1;
		uint8 MUX4 :1;
		uint8 ADLAR :1;
		uint8 REFS0 :1;
		uint8 REFS1 :1;
	}Bits;
}ADMUX_reg_type;
/*ADMUX Address Access Macro*/
#define ADMUX_REG      (*(volatile ADMUX_reg_type * const)0x07)
/*ADMUX Bit Position Macros*/
#define _ADMUX_MUX0_POSITION  0x0
#define _ADMUX_MUX1_POSITION  0x1
#define _ADMUX_MUX2_POSITION  0x2
#define _ADMUX_MUX3_POSITION  0x3
#define _ADMUX_MUX4_POSITION  0x4
#define _ADMUX_ADLAR_POSITION 0x5
#define _ADMUX_REFS0_POSITION 0x6
#define _ADMUX_REFS1_POSITION 0x7
/*ADMUX Bit mask Macros*/
#define _ADMUX_MUX0_MASK      0x1
#define _ADMUX_MUX1_MASK      0x2
#define _ADMUX_MUX2_MASK      0x4
#define _ADMUX_MUX3_MASK      0x8
#define _ADMUX_MUX4_MASK      0x10
#define _ADMUX_ADLAR_MASK     0x20
#define _ADMUX_REFS0_MASK     0x40
#define _ADMUX_REFS1_MASK     0x80


/*Register: ADCSRA*/
typedef union{
	uint8 Byte;
	struct{
		uint8 ADPS0 :1;
		uint8 ADPS1 :1;
		uint8 ADPS2 :1;
		uint8 ADIE :1;
		uint8 ADIF :1;
		uint8 ADATE :1;
		uint8 ADSC :1;
		uint8 ADEN :1;
	}Bits;
}ADCSRA_reg_type;
/*ADCSRA Address Access Macro*/
#define ADCSRA_REG      (*(volatile ADCSRA_reg_type * const)0x06)
/*ADCSRA Bit Position Macros*/
#define _ADCSRA_ADPS0_POSITION0x0
#define _ADCSRA_ADPS1_POSITION0x1
#define _ADCSRA_ADPS2_POSITION0x2
#define _ADCSRA_ADIE_POSITION 0x3
#define _ADCSRA_ADIF_POSITION 0x4
#define _ADCSRA_ADATE_POSITION0x5
#define _ADCSRA_ADSC_POSITION 0x6
#define _ADCSRA_ADEN_POSITION 0x7
/*ADCSRA Bit mask Macros*/
#define _ADCSRA_ADPS0_MASK    0x1
#define _ADCSRA_ADPS1_MASK    0x2
#define _ADCSRA_ADPS2_MASK    0x4
#define _ADCSRA_ADIE_MASK     0x8
#define _ADCSRA_ADIF_MASK     0x10
#define _ADCSRA_ADATE_MASK    0x20
#define _ADCSRA_ADSC_MASK     0x40
#define _ADCSRA_ADEN_MASK     0x80


/*Register: TWAR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 TWGCE :1;
		uint8 TWA0 :1;
		uint8 TWA1 :1;
		uint8 TWA2 :1;
		uint8 TWA3 :1;
		uint8 TWA4 :1;
		uint8 TWA5 :1;
		uint8 TWA6 :1;
	}Bits;
}TWAR_reg_type;
/*TWAR Address Access Macro*/
#define TWAR_REG      (*(volatile TWAR_reg_type * const)0x02)
/*TWAR Bit Position Macros*/
#define _TWAR_TWGCE_POSITION  0x0
#define _TWAR_TWA0_POSITION   0x1
#define _TWAR_TWA1_POSITION   0x2
#define _TWAR_TWA2_POSITION   0x3
#define _TWAR_TWA3_POSITION   0x4
#define _TWAR_TWA4_POSITION   0x5
#define _TWAR_TWA5_POSITION   0x6
#define _TWAR_TWA6_POSITION   0x7
/*TWAR Bit mask Macros*/
#define _TWAR_TWGCE_MASK      0x1
#define _TWAR_TWA0_MASK       0x2
#define _TWAR_TWA1_MASK       0x4
#define _TWAR_TWA2_MASK       0x8
#define _TWAR_TWA3_MASK       0x10
#define _TWAR_TWA4_MASK       0x20
#define _TWAR_TWA5_MASK       0x40
#define _TWAR_TWA6_MASK       0x80


/*Register: TWSR*/
typedef union{
	uint8 Byte;
	struct{
		uint8 TWPS0 :1;
		uint8 TWPS1 :1;
		uint8 :1;
		uint8 TWS3 :1;
		uint8 TWS4 :1;
		uint8 TWS5 :1;
		uint8 TWS6 :1;
		uint8 TWS7 :1;
	}Bits;
}TWSR_reg_type;
/*TWSR Address Access Macro*/
#define TWSR_REG      (*(volatile TWSR_reg_type * const)0x01)
/*TWSR Bit Position Macros*/
#define _TWSR_TWPS0_POSITION  0x0
#define _TWSR_TWPS1_POSITION  0x1
#define _TWSR_TWS3_POSITION   0x3
#define _TWSR_TWS4_POSITION   0x4
#define _TWSR_TWS5_POSITION   0x5
#define _TWSR_TWS6_POSITION   0x6
#define _TWSR_TWS7_POSITION   0x7
/*TWSR Bit mask Macros*/
#define _TWSR_TWPS0_MASK      0x1
#define _TWSR_TWPS1_MASK      0x2
#define _TWSR_TWS3_MASK       0x8
#define _TWSR_TWS4_MASK       0x10
#define _TWSR_TWS5_MASK       0x20
#define _TWSR_TWS6_MASK       0x40
#define _TWSR_TWS7_MASK       0x80



/*Timer/Counter0 Output Compare Register*/
#define OCR0_REG      (*(volatile uint8 * const)0x3C)

/*Timer/Counter0 (8 Bits)*/
#define TCNT0_REG      (*(volatile uint8 * const)0x32)

/*Oscillator Calibration Register*/
#define OSCCAL_REG      (*(volatile uint8 * const)0x31)

/*On-Chip Debug Register*/
#define OCDR_REG      (*(volatile uint8 * const)0x31)

/*Timer/Counter1 Counter Register High Byte*/
#define TCNT1H_REG      (*(volatile uint8 * const)0x2D)

/*Timer/Counter1 Counter Register Low Byte*/
#define TCNT1L_REG      (*(volatile uint8 * const)0x2C)

/*Timer/Counter1 Output Compare Register A High Byte*/
#define OCR1AH_REG      (*(volatile uint8 * const)0x2B)

/*Timer/Counter1 Output Compare Register A Low Byte*/
#define OCR1AL_REG      (*(volatile uint8 * const)0x2A)

/*Timer/Counter1 Output Compare Register B High Byte*/
#define OCR1BH_REG      (*(volatile uint8 * const)0x29)

/*Timer/Counter1 Output Compare Register B Low Byte*/
#define OCR1BL_REG      (*(volatile uint8 * const)0x28)

/*Timer/Counter1 Input Capture Register High Byte*/
#define ICR1H_REG      (*(volatile uint8 * const)0x27)

/*Timer/Counter1 Input Capture Register Low Byte*/
#define ICR1L_REG      (*(volatile uint8 * const)0x26)

/*Timer/Counter2 (8 Bits)*/
#define TCNT2_REG      (*(volatile uint8 * const)0x24)

/*Timer/Counter2 Output Compare Register*/
#define OCR2_REG      (*(volatile uint8 * const)0x23)

/*EEPROM Address Register Low Byte*/
#define EEARL_REG      (*(volatile uint8 * const)0x1E)

/*EEPROM Data Register*/
#define EEDR_REG      (*(volatile uint8 * const)0x1D)

/*SPI Data Register*/
#define SPDR_REG      (*(volatile uint8 * const)0x0F)

/*USART I/O Data Register*/
#define UDR_REG      (*(volatile uint8 * const)0x0C)

/*USART Baud Rate Register Low Byte*/
#define UBRRL_REG      (*(volatile uint8 * const)0x09)

/*ADC Data Register High Byte*/
#define ADCH_REG      (*(volatile uint8 * const)0x05)

/*ADC Data Register Low Byte*/
#define ADCL_REG      (*(volatile uint8 * const)0x04)

/*Two-wire Serial Interface Data Register*/
#define TWDR_REG      (*(volatile uint8 * const)0x03)

/*Two-wire Serial Interface Bit Rate Register*/
#define TWBR_REG      (*(volatile uint8 * const)0x00)

#endif /* SFR_DEFS_H_ */