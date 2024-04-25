#ifndef __6_3_H__
#define  __6_3_H__
#include <cstdint>


#define CANTIDAD_NUMEROS 10
typedef struct
{
    int16_t numero;
    uint8_t posicion; 
}st_numero;


int16_t leerdato();

#endif