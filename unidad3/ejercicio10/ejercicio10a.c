// con if
#include <stdio.h>
#include <stdlib.h>

void main() {
    int num_mes;
    printf("Ingrese un numero del 1 al 12: ");
    scanf("%d", &num_mes);
    if (num_mes >= 1 && num_mes <= 12) {
        if (num_mes == 1) {
            printf("Enero\n");
        } 
        else if (num_mes == 2) {
            printf("Febrero\n");
        } 
        else if (num_mes == 3) {
            printf("Marzo\n");
        } 
        else if (num_mes == 4) {
            printf("Abril\n");
        } 
        else if (num_mes == 5) {
            printf("Mayo\n");
        } 
        else if (num_mes == 6) {
            printf("Junio\n");
        } 
        else if (num_mes == 7) {
            printf("Julio\n");
        } 
        else if (num_mes == 8) {
            printf("Agosto\n");
        } 
        else if (num_mes == 9) {
            printf("Septiembre\n");
        } 
        else if (num_mes == 10) {
            printf("Octubre\n");
        } 
        else if (num_mes == 11) {
            printf("Noviembre\n");
        } 
        else {
            printf("Diciembre\n");
        }
    } 
    else {
        printf("Numero fuera del rango valido\n");
    }
    system("pause");
}
