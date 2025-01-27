// layers.h
#ifndef LAYERS_H
#define LAYERS_H

// Define your layers
enum layers {
    _QWTY,
    _GALM,
    _NUMB,
    _SYMB,
    _NAVI,
    _FUNC,
    _LOWR,
    _RAIS,
    _LAYER_COUNT  // Total number of layers
};

// Layer names stored in regular memory
static const char *const layer_names[] = {
    "QWTY",
    "GALM",
    "NUMB",
    "SYMB",
    "NAVI",
    "FUNC",
    "LOWR",
    "RAIS"
};

// Function to get layer name
const char *get_layer_name(uint8_t layer);

#endif // LAYERS_H
