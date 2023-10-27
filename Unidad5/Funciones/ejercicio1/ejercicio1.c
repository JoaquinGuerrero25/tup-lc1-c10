// Crear una función que calcule el cubo de un número real (float). El resultado deberá
// ser otro número real

#include <stdio.h>
#include <stdlib.h>

float calcularCubo(float num);

int main()
{
    float numero = 0;
    float resultado = 0;

    printf("Ingrese un numero real: ");
    scanf("%f", &numero);

    resultado = calcularCubo(numero); 

    printf("El cubo del numero ingresado es: %0.1f\n", resultado);

    system("pause");

    return 0;
}

float calcularCubo(float num){
    int calculo;
    calculo = num * num * num;
    return calculo;
}