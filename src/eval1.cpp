#include "6_3.h"
#include <stdlib.h>
#include <stdio.h>

#define META 10

void temaAA()
{

    st_numero resultado;
    uint8_t i;
    int16_t dato;
    resultado.numero=leerdato();
    resultado.posicion=0;
    uint16_t distancia=resultado.numero;
    for(i=1;i<20;i++)
    {
        dato = leerdato();
        if(abs(dato - META)< distancia)
        {
            distancia= abs(dato - META);
            resultado.numero =dato;
            resultado.posicion =i;
        }
    }
    printf("Resultado: %d, Posicion: %d\n",resultado.numero,resultado.posicion);

}

#undef META
#define META 25

void temaBB()
{
    st_numero resultado;
    uint8_t i;
    int16_t dato;
    resultado.numero=leerdato();
    resultado.posicion=0;
    uint16_t distancia=resultado.numero;
    for(i=1;i<20;i++)
    {
        dato = leerdato();
        if(abs(dato - META)> distancia)
        {
            distancia= abs(dato - META);
            resultado.numero =dato;
            resultado.posicion =i;
        }
    }
    printf("Resultado: %d, Posicion: %d\n",resultado.numero,resultado.posicion);

}