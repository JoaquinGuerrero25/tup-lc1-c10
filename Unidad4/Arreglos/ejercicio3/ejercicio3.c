// Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
// mostrar cuántas veces se repite el número 5. 
#include <stdlib.h>
#include <stdio.h>

void main(){
    int num[5];
    int cantCincos = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero entero en la posicion %d: ", i+1);
        scanf("%d", &num[i]);
        if (num[i] == 5)
        {
            cantCincos += 1;
        }
    }
    if (cantCincos >= 1)
    {
        printf("El numero 5 fue ingreso un total  de %d veces.\n", cantCincos);
    }
    else
    {
        printf("No se ingreso el numero 5.\n");
    }
    system("pause");
}