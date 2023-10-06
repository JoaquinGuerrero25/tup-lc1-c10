// Ingrese por teclado la facturacion de los últimos 6 meses. Informar:
// a. La facturacion total
// b. El promedio de facturacion
// c. La máxima facturacion
// d. La mínima facturacion

#include <stdio.h>
#include <stdlib.h>

void main() {
    float facturacion[6];
    float factTotal = 0;
    float facturacionMin;
    float facturacionMax;
    float promedio = 0;
    printf("Ingrese la ventas de los ultimos 6 meses.\n");
    for (int i = 0; i < 6; i++) {
        printf("Ingrese la venta del mes %i: ", i + 1);
        scanf("%f", &facturacion[i]);
        factTotal += facturacion[i];

        if (i == 0) {
            facturacionMin = facturacion[i];
            facturacionMax = facturacion[i];
        }
        
        if (facturacionMin > facturacion[i]) {
            facturacionMin = facturacion[i];
        }
        if (facturacionMax < facturacion[i]) {
            facturacionMax = facturacion[i];
        }
    }
    promedio = factTotal / 6;
    printf("La facturacion total es: %0.1f\n", factTotal);
    printf("El promedio de facturacion es: %0.1f\n", promedio);
    printf("La maxima facturacion es: %0.1f\n", facturacionMax);
    printf("La minima facturacion es: %0.1f\n", facturacionMin);

    system("pause");

}