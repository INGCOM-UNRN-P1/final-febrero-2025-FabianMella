/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */
#include "libreria.h"
#include "ejercicio.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool verificarBalanceo(pila_t* pila) 
{
    FILE *archivo = fopen("archivo.txt", "r");
    if (!archivo) 
    {
        perror("Error al abrir el archivo");
        return 0;
    }

    inicializarPila(pila);
    int posicion=0;
    char caracter;
    while ((caracter = fgetc(archivo)) != EOF) 
    {
            if (caracter == '(' || caracter == '[' || caracter == '{') 
            {
                push(pila, caracter,posicion);
                posicion++;
            } 
            else if (caracter == ')' || caracter == ']' || caracter == "}") 
            {
                pop(pila);
                posicion++; 
            }else
            {
                posicion++;
            }
        
    }

    fclose(archivo);
    return estaVacia(pila);  
}