// Crear una función que reciba un número cualquiera y que devuelva como resultado
// la suma de sus dígitos.

#include <stdio.h>
#include <stdlib.h>

int sumaDigitos(int num);

int main()
{
    int numero, resultado;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    resultado = sumaDigitos(numero);

    printf("La suma de los digitos es: %i\n",resultado);

    system("pause");

    return 0;

}


int sumaDigitos(int num)
{
    int suma = 0;

    while(num != 0)
    {
        suma += num % 10;
        num /= 10;
    }

    return suma;
}