// Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
// positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
// (repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
// usuario la suma de los 10 números ingresados.

#include <stdio.h>
#include <stdlib.h>

void main() {
    float num, sumaNum = 0;
    for(int i = 1; i <= 10; i++){
        do{
            printf("Ingrese un numero real: ");
            scanf("%f", &num);
        }while(num<=0);
        sumaNum = sumaNum + num;
    }
    printf("La suma de los numeros ingresados es: %0.1f\n", sumaNum);
    system("pause");
}