// Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(){
    float lado1, lado2;
    printf("Ingrese dos lados de un triangulo:\n");
    scanf("%f", &lado1);
    scanf("%f", &lado2);
    float hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));
    float perimetro = lado1 + lado2 + hipotenusa;
    float superficie = (lado1 * lado2) / 2;
    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Superficie: %.2f\n", superficie);
    system("pause");
    return 0;
}