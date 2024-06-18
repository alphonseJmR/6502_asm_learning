#ifndef _6502_INTERNAL_REGISTER_S_H
#define _6502_INTERNAL_REGISTER_S_H

#include <stdint.h>

typedef struct asm_interal_register_s {

    uint8_t reg_x;
    uint8_t reg_y;
    uint8_t reg_a;

    uint8_t status_reg;

}asm_reg;


#endif