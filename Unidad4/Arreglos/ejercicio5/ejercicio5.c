// Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
// Cada ítem del vector representa la inflación de un mes de tal manera que el primer
// ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
// que es 0.9 representa la inflación de diciembre. Se pide:
// a. Informar la inflación anual
// b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 =
// 0.1
// c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 =
// 0.9 

#include <stdio.h>
#include <stdlib.h>

void main() {
    float inflacion[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float inflacionAnual = 0;
    float inflacionBaja = inflacion[0]; 
    int mesBaja = 0, mesAlta = 0; 
    float inflacionAlta = inflacion[0]; 

    for (int i = 0; i < 12; i++) {
        inflacionAnual += inflacion[i];

        if (inflacionBaja > inflacion[i]) {
            inflacionBaja = inflacion[i];
            mesBaja = i + 1;
        }

        if (inflacionAlta < inflacion[i]) {
            inflacionAlta = inflacion[i];
            mesAlta = i + 1;
        }
    }

    printf("La inflacion anual es: %0.1f\n", inflacionAnual);
    printf("La inflacion mas baja pertenece al mes %i y es: %0.1f\n", mesBaja, inflacionBaja);
    printf("La inflacion mas alta pertenece al mes %i y es: %0.1f\n", mesAlta, inflacionAlta);

    system("pause");
}




