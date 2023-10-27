// Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() 
{
    char cadenas[3][50];
    int longitud = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese la cadena en la posicion %i: ", i+1);
        fgets(cadenas[i], sizeof(cadenas[i]), stdin);
    }

    printf("Cadenas ingresadas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Cadena %d: %s\n", i + 1, cadenas[i]);
    }

    for (int i = 0; i < 3; i++)
    {
       longitud = strlen(cadenas[i]);
       printf("La longitud de las cadenas es: %i\n", longitud);
    }
    
    system("pause");
}