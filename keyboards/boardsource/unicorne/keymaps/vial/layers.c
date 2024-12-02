// layers.c
#include "layers.h"

const char *get_layer_name(uint8_t layer) {
    switch (layer) {
        case _QWTY:
            return "QWERTY";
        case _SHFT:
            return "Shifted";
        case _NUMB:
            return "Numbers";
        case _NAVI:
            return "Navigation";
        case _FUNC:
            return "Function";
        case _LOWR:
            return "Lower";
        case _RAIS:
            return "Raise";
        case _ADJS:
            return "Adjust";
        default:
            return "Undefined";
    }
}