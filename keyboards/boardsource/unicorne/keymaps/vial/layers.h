// layers.h
#ifndef LAYERS_H
#define LAYERS_H

// Define your layers
enum layers {
    _QWTY,
    _SHFT,
    _NUMB,
    _NAVI,
    _FUNC,
    _LOWR,
    _RAIS,
    _ADJS,
    _LAYER_COUNT  // Total number of layers
};

// Layer names stored in regular memory
static const char *const layer_names[] = {
    "QWRTY",
    "SHFT",
    "NUMB",
    "NAVI",
    "FUNC",
    "LOWR",
    "RAIS",
    "ADJS"
};

// Function to get layer name
const char *get_layer_name(uint8_t layer);

#endif // LAYERS_H