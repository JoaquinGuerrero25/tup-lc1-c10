// Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char nombres[2][20];
    int comparacion = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Ingrese un nombre en la posicion %i: ", i+1);
        fgets(nombres[i], sizeof(nombres[i]), stdin);
    }

    comparacion  = strcmp(nombres[0], nombres[1]);

    if (comparacion < 0)
    {
        printf("%s procede alfabeticamente a %s\n", nombres[0], nombres[1]);
    }
    else if (comparacion > 0)
    {
        printf("%s procede alfabeticamente a %s\n", nombres[1], nombres[0]);
    }
    else
    {
        printf("Los nombres %s y %s son iguales alfabeticamente.\n", nombres[0], nombres[1]);
    }

    system("pause");
}