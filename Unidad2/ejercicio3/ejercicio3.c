// Ingresar los lados de un triángulo calcular su perímetro e imprimirlo
#include <stdlib.h>
#include <stdio.h>

int main(){
    float lado1, lado2, lado3;
    printf("Ingrese los lados de un triangulo:\n");
    scanf("%f", &lado1);
    scanf("%f", &lado2);
    scanf("%f", &lado3);
    float suma = lado1 + lado2 + lado3;
    printf("El perímetro del triangulo es: %f\n", suma);
    system("pause");
    return 0;
}