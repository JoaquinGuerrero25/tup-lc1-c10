// // El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al usuario los resultado
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float lado1, lado2;
    printf("Ingrese el valor del primer lado del rectángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el valor del segundo lado del rectángulo: ");
    scanf("%f", &lado2);
    float diagonal = sqrt(lado1 * lado1 + lado2 * lado2);
    float superficie = lado1 * lado2;
    float perimetro = 2 * (lado1 + lado2);
    printf("Resultados:\n");
    printf("Diagonal principal: %f\n", diagonal);
    printf("Superficie: %f\n", superficie);
    printf("Perímetro: %f\n", perimetro);
    system("pause");
    return 0;
}