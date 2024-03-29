#include "6_3.h"

int16_t leerdato()
{
    static constexpr int16_t valores[] = {7,    56,     255,    -56,    1256,
                                          125,  125,    -2200,  14,     458,
                                          -789, 7745,   0,      -56,    0};
    static uint8_t i = 0;
    if (++i == sizeof(valores) / sizeof(int16_t))
        i = 0;
    return valores[i];
}

int main()
{
    return 0;
}