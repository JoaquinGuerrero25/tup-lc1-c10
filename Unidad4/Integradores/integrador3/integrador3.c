// Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
// cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
// opciones a resolver:
// 1. Cargar Alumnos
// 2. Buscar un alumno
// 3. Modificar la nota de un alumno
// 4. Mostrar un listado de los 10 alumnos
// 5. Salir
// Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
// Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
// mayor a 0 y menor o igual que 10.
// La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
// ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
// La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
// DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
// encuentra modificar la nota del alumno por la ingresada.
// La opción 4 debe mostrar en la consola el listado de alumnos.
// SÓLO se saldrá de la aplicación si se selecciona la opción 5.




#include <stdio.h>
#include <stdlib.h>
void main()
{
    int dnis[10] = {0};
    float notas[10] = {0};
    int dniABuscar;
    int opcion;
    int tam = 2;
    do
    {
        printf("\nElija una opci%cn\n", 162);
        printf("1. Cargar alumnos\n");
        printf("2. Buscar un alumno\n");
        printf("3. Modificar una nota\n");
        printf("4. Mostrar alumnos\n");
        printf("5. Salir.\n\n");
        scanf("%d", &opcion);
        int dniExiste = 0;
        if (opcion != 5)
        {
            switch (opcion)
            {
            case 1:
                for (int i = 0; i < tam; i++)
                {
                    printf("Ingrese el dni del alumno: ");
                    scanf("%i", &dnis[i]);
                    while ( dnis[i] < 1000000 || dnis[i] > 99999999 )
                    {
                        printf("Dni incorrecto. Ingrese un dni valido: ");
                        scanf("%i", &dnis[i]);
                    }
                    printf("Ingrese la nota del alumno: ");
                    scanf("%f", &notas[i]);
                    while ( notas[i] <= 0  || notas[i] > 10 )
                    {
                        printf("nota incorrecto. Ingrese una nota valida: ");
                        scanf("%f", &notas[i]);
                    }
                }
                break;
            case 2:
                printf("Ingrese el dni del alumno a buscar\n");
                scanf("%i", &dniABuscar);
                for (int i = 0; i < tam; i++)
                {
                    if(dniABuscar == dnis[i])
                    {
                        printf("La nota del alumno con dni %i es %.2f", dnis[i], notas[i]);
                        dniExiste = 1;
                    }
                }
                if ( dniExiste == 0)
                {
                    printf("DNI inexistente\n");
                }
                break;
            case 3:
                printf("Ingrese el dni del alumno a modificar\n");
                scanf("%i", &dniABuscar);
                for (int i = 0; i < tam; i++)
                {
                    if(dniABuscar == dnis[i])
                    {
                        dniExiste = 1;
                        printf("Ingrese la nota: ");
                        scanf("%f", &notas[i]);
                        while ( notas[i] <= 0  || notas[i] > 10 )
                        {
                            printf("nota incorrecta. Ingrese una nota valida: ");
                            scanf("%f", &notas[i]);
                        }
                    }
                }
                if ( dniExiste == 0)
                {
                    printf("DNI inexistente\n");
                }
                break;
            case 4:
                printf("Dni alumno - Nota\n");
                for (int i = 0;  i < tam; i++)
                {
                    printf("%i - %f\n", dnis[i], notas[i]);
                }
                break;
            default:
                printf("opción inválida");
                break;
            }
        }
    } while (opcion != 5);

    system("pause");
}

// tarea
// int x;
// int n;
// while (bandera == 1 || n == 9)
// {   
//     if (dniABUSCAR == dnis[n] )
//     {
//         busqueda  = n
//         bandera = 1;
//     }
//     else
//     {
//         bandera = 0;
//     }
//     n++;
// }