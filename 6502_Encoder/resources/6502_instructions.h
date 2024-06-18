#ifndef _6502_ASM_INSTRUCTION_S_H
#define _6502_ASM_INSTRUCTION_S_H

#define BRK 0x00    // impl
#define BPL 0x10    //  rel
#define JSR 0x20    //  abs
#define BMI 0x30    //  rel
#define RTI 0x40    //  impl
#define BVC 0x50    //  rel
#define RTS 0x60    //  impl
#define BVS 0x70    //  rel
#define BCC 0x90    //  rel
#define LDY 0xA0    // #
#define BCS 0xB0    //  rel
#define CPY 0xC0    //  #
#define BNE 0xD0    //  rel
#define CPX 0xE0    //  #
#define BEQ 0xF0    //  rel

#define OR_Axi 0x01     //  X,Ind
#define OR_Aiy 0x11     //  Ind,Y
#define AND_xi 0x21     //  X,Ind
#define AND_iy 0x31     //  Ind,Y
#define EOR_xi 0x41     //  X,Ind
#define EOR_iy 0x51     //  Ind,Y
#define ADC_xi 0x61     //  X,Ind
#define ADC_iy 0x71     //  Ind,Y
#define STA_xi 0x81     //  X,Ind
#define STA_iy 0x91     //  Ind,Y
#define LDA_xi 0xA1     //  X,Ind
#define LDA_iy 0xB1     //  Ind,Y
#define CMP_xi 0xC1     //  X,Ind
#define CMP_iy 0xD1     //  Ind,Y
#define SBC_xi 0xE1     //  X,Ind
#define SBC_iy 0xF1     //  Ind,Y

#define LDX 0xA2        //  #

#define BIT 0x24        //  ZPG
#define STY 0x84        //  ZPG
#define STY_zpx 0x94    //  Zpg,X
#define LDY 0xA4        //  ZPG
#define LDY_zx 0xB4     //  Zpg,X
#define CPY 0xC4        //  ZPG
#define CPX 0xE4        //  ZPG

#define ORA_zpg 0x05    //  ZPG
#define ORA_zx 0x15     //  Zpg,X
#define AND_zpg 0x25    //  ZPG
#define AND_zx 0x35     //  Zpg,X
#define EOR_zpg 0x45    //  ZPG
#define EOR_zx 0x55     //  Zpg,X
#define ADC_zpg 0x65    //  ZPG
#define ADC_zx 0x75     //  Zpg,X
#define STA_zpg 0x85    //  ZPG
#define STA_zx 0x95     //  Zpg,X
#define LDA_zpg 0xA5    //  ZPG
#define LDA_zx 0xB5     //  Zpg,X
#define CMP_zpg 0xC5    //  ZPG
#define CMP_zx 0xD5     //  Zpg,X
#define SBC_zpg 0xE5    //  ZPG
#define SBC_zx 0xF5     //  Zpg,X

#define ASL_zpg 0x06    //  ZPG
#define ASL_zx  0x16    //  Zpg,X
#define ROL_zpg 0x26    //  ZPG
#define ROL_zx 0x36     //  Zpg,X
#define LSR_zpg 0x46    //  ZPG
#define LSR_zx 0x56     //  Zpg,X
#define ROR_zpg 0x66    //  ZPG
#define ROR_zx  0x76    //  Zpg,X
#define STX_zpg 0x86    //  ZPG
#define STX_zx  0x96    //  Zpg,X
#define LDX_zpg 0xA6    //  ZPG
#define LDX_zx 0xB6     //  Zpg,X
#define DEC_zpg 0xC6    //  ZPG
#define DEC_zx 0xD6     //  Zpg,X
#define INC_zpg 0xE6    //  ZPG
#define INC_zx 0xF6     //  Zpg,X

#define PHP 0x08        //  Impl
#define CLC 0x18        //  Impl
#define PLP 0x28        //  Impl
#define SEC 0x38        //  Impl
#define PHA 0x48        //  Impl
#define CLI 0x58        //  Impl
#define PLA 0x68        //  Impl
#define SEI 0x78        //  Impl
#define DEY 0x88        //  Impl
#define TYA 0x98        //  Impl
#define TAY 0xA8        //  Impl
#define CLV 0xB8        //  Impl
#define INY 0xC8        //  Impl
#define CLD 0xD8        //  Impl
#define INX 0xE8        //  Impl
#define SED 0xF8        //  Impl

#define OR_A 0x09       //  #
#define OR_Aay 0x19     //  Abs,Y
#define AND 0x29        //  #
#define AND_ay 0x39     //  Abs,Y
#define EOR 0x49        //  #
#define EOR_ay 0x59     //  Abs,Y
#define ADC 0x69        //  #
#define ADC_ay 0x79     //  Abs,Y
#define STA_ay 0x99     //  Abs,Y
#define LDA 0xA9        //  #
#define LDA_ay 0xB9     //  Abs,Y
#define CMP 0xC9        //  #
#define CMP_ay 0xD9     //  Abs,Y
#define SBC 0xE9        //  #
#define SBC_ay 0xF9     //  Abs,Y

#define ASL 0x0A        //  A
#define ROL 0x2A        //  A
#define LSR 0x4A        //  A
#define ROR 0x6A        //  A
#define TXA 0x8A        //  Impl
#define TXS 0x9A        //  Impl
#define TAX 0xAA        //  Impl
#define TSX 0xBA        //  Impl
#define DEX 0xCA        //  Impl
#define NOP 0xEA        //  Impl

#define BIT_abs 0x2C    //  ABS
#define JMP_abs 0x4C    //  ABS
#define JMP_ind 0x6C    //  IND
#define STY_abs 0x8C    //  ABS
#define LDY_abs 0xAC    //  ABS
#define LDY_absx 0xBC   //  Abs,X
#define CPY_abs 0xCC    //  ABS
#define CPX_abs 0xEC    //  ABS

#define ORA_abs 0x0D    //  ABS
#define ORA_absx 0x1D   //  Abs,X
#define AND_abs 0x2D    //  ABS
#define AND_absx 0x3D   //  Abs,X
#define EOR_abs 0x4D    //  ABS
#define EOR_absx 0x5D   //  Abs,X
#define ADC_abs 0x6D    //  ABS
#define ADC_absx 0x7D   //  Abs,X
#define STA_abs 0x8D    //  ABS
#define STA_absx 0x9D   //  Abs,X
#define LDA_abs 0xAD    //  ABS
#define LDA_absx 0xBD   //  Abs,X
#define CMP_abs 0xCD    //  ABS
#define CMP_absx 0xDD   //  Abs,X
#define SBC_abs 0xED    //  ABS
#define SBC_absx 0xFD   //  Abs,X

#define ASL_abs 0x0E    //  ABS
#define ASL_absx 0x1E   //  Abs,X
#define ROL_abs 0x2E    //  ABS
#define ROL_absx 0x3E   //  Abs,X
#define LSR_abs 0x4E    //  ABS
#define LSR_absx 0x5E   //  Abs,X
#define ROR_abs 0x6E    //  ABS
#define ROR_absx 0x7E   //  Abx,X
#define STX_abs 0x8E    //  ABS
#define LDX_abs 0x9E    //  ABS
#define LDX_absy 0xBE   //  Abs,Y
#define DEC_abs 0xCE    //  ABS
#define DEC_absx 0xDE   //  Abs,X
#define INC_abs 0xEE    //  ABS
#define INC_absx 0xFE   //  Abs,X

#endif