// Crear una función que devuelva la primera letra de una cadena de texto.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char primerLetra(char caracter[]);

int main()
{
    char cadena[30];
    char caracter;

    printf("Ingrese una cadena de texto con un maximo de 30 caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    caracter = primerLetra(cadena);

    printf("La primera letra de la cadena es: %c\n", caracter);

    system("pause");

    return 0;
}


char primerLetra(char caracter[])
{
    return caracter[0];
}