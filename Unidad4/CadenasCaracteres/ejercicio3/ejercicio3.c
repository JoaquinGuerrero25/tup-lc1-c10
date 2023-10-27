// Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
// "nombre apellido" para cada uno, y mostrar por consola.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char nombres[2][20];
    char apellidos[2][20];
    char nombreApellido[40];

    for (int i = 0; i < 2; i++)
    {
        printf("Ingrese el nombre en la posicion %i: ", i+1);
        fgets(nombres[i], sizeof(nombres[i]), stdin);
        printf("Ingrese el apellido en la posicion %i: ", i+1);
        fgets(apellidos[i], sizeof(apellidos[i]), stdin);
    }
    
    for (int j = 0; j < 2 ; j++)
    {
        strcpy(nombreApellido, nombres[j]);
        strcat(nombreApellido, " "); 
        strcat(nombreApellido, apellidos[j]);

        printf("Nombre completo: %s\n", nombreApellido);
    }
    
    system("pause");
}