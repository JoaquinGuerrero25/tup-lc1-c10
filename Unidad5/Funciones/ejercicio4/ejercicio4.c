// Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
// número primo o 0 en caso contrario

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int esPrimo(int num);

int main()
{
    int numero = 0;
    int resultado = 0;

    printf("Ingrese un numero entero: ");
    scanf("%i", &numero);

    resultado = esPrimo(numero);

    if (resultado == 1)
    {
        printf("Es numero primo.\n");
    }
    else
    {
        printf("no es numero primo.\n");
    }

    system("pause");

    return 0;
}


int esPrimo(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    int limite = (int)sqrt(num);
    for (int i = 2; i <= limite; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}