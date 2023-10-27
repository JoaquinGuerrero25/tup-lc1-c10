// Crear una función llamada “signo”, que reciba un número real, y devuelva un número
// entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.

#include <stdio.h>
#include <stdlib.h>

int signo(float num);

int main()
{
    float numero = 0; 
    int resultado = 0;

    printf("Ingrese un numero real: ");
    scanf("%f", &numero);

    resultado = signo(numero);

    if (resultado == -1)
    {
        printf("El numero es negativo.\n");
    }
    else if (resultado == 1)
    {
        printf("El numero es positivo.\n");
    }
    else
    {
        printf("El numero es 0.\n");
    }

    system("pause");

    return 0;
}

int signo(float num)
{
    if (num < 0)
    {
        return -1;
    }
    else if (num > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}