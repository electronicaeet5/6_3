#include "6_3.h"
#include <algorithm>
#include <iostream>
#define CANTIDAD_NUMEROS 10

int16_t leerdato()
{
    static constexpr int16_t valores[] = {7,    56,     2555,   -56,    1256,
                                          125,  125,    -2200,  14,     458,
                                          -789, 7745,   0,      -56,    0};
    static uint8_t i = 0;
    if (++i == sizeof(valores) / sizeof(int16_t))
        i = 0;
    return valores[i];
}

int main()
{
    auto max=leerdato();
    for(uint8_t i=0;i<CANTIDAD_NUMEROS-1;i++)
    {
        max=std::max(max,leerdato());
    }
    std::cout << "el maximo es " << max << std::endl;
    return 0;
}