/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ejercicio.h"
#include "libreria.h"

int main()
{
    pila_t* pila = (pila_t*)malloc(sizeof(pila));
   

    if(verificarBalanceo(pila)) 
    {
        printf("estan balanceados");
    }
    else
    {
        printf("Error de balanceo");
        printf("Elementos de la pila (de arriba hacia abajo):\n");

        Nodo_t *actual = pila->inicio;
        while (actual != NULL) 
        {
            printf("error de %c en posicion: %d\n",actual->dato, actual->posicion); 
            actual = actual->siguiente;
        }
    }
    return 0;
}
