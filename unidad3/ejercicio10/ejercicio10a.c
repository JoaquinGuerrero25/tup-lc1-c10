// con if
#include <stdio.h>
#include <stdlib.h>

void main() {
    int numero_mes;
    printf("Ingrese un número del 1 al 12: ");
    scanf("%d", &numero_mes);
    if (numero_mes >= 1 && numero_mes <= 12) {
        if (numero_mes == 1) {
            printf("Enero\n");
        } 
        else if (numero_mes == 2) {
            printf("Febrero\n");
        } 
        else if (numero_mes == 3) {
            printf("Marzo\n");
        } 
        else if (numero_mes == 4) {
            printf("Abril\n");
        } 
        else if (numero_mes == 5) {
            printf("Mayo\n");
        } 
        else if (numero_mes == 6) {
            printf("Junio\n");
        } 
        else if (numero_mes == 7) {
            printf("Julio\n");
        } 
        else if (numero_mes == 8) {
            printf("Agosto\n");
        } 
        else if (numero_mes == 9) {
            printf("Septiembre\n");
        } 
        else if (numero_mes == 10) {
            printf("Octubre\n");
        } 
        else if (numero_mes == 11) {
            printf("Noviembre\n");
        } 
        else {
            printf("Diciembre\n");
        }
    } 
    else {
        printf("Número fuera del rango válido\n");
    }
    system("pause");
}
