// Se desea realizar un programa que gestione el stock de un negocio de venta de
// electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
// electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
// Se deberá presentar un menú con las siguientes opciones:
// 1. Cargar productos.
// 2. Modificar stock.
// 3. Mostrar productos sin stock.
// 4. Listar productos.
// 5. Salir.
// Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
// de barras, descripción y cantidad.
// La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
// stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
// un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
// stock con la cantidad ingresada.
// La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
// igual a cero.
// La opción 4 debe mostrar en la consola el listado de electrodomésticos.
// SOLO se saldrá de la aplicación si se selecciona la opción 5.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numeroElectrodomestico = 0;
    char descripcion[100][100];
    int codigo[100];
    int stock[100];
    int opcion;
    int codigoModificar, nuevaCantidad;

    
    do
    {
        printf("Menu:\n");
        printf("1. Cargar productos\n");
        printf("2. Modificar stock\n");
        printf("3. Mostrar productos sin stock\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            if (numeroElectrodomestico < 100)
            {
                printf("Ingrese el codigo de barras: ");
                scanf("%d", &codigo[numeroElectrodomestico]);
                printf("Ingrese la descripcion: ");
                scanf("%s", &descripcion[numeroElectrodomestico]);
                printf("Ingrese la cantidad en stock: ");
                scanf("%d", &stock[numeroElectrodomestico]);
                numeroElectrodomestico++;
            }
            else
            {
                printf("Se alcanzo el limete de productos cargados.\n");
            }
            break;

        case 2:

            printf("Ingrese el código de barras del producto a modificar: ");
            scanf("%d", &codigoModificar);
        
            int encontrado = 0; //bandera
            for (int i = 0; i < numeroElectrodomestico; i++) 
            {
                if (codigo[i] == codigoModificar) {
                    printf("Ingrese la nueva cantidad: ");
                    scanf("%d", &nuevaCantidad);
                    stock[i] = nuevaCantidad;
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado)
            {
                printf("Electrodoméstico inexistente.\n");
            }
            break;

        case 3:
            printf("Productos sin stock:\n");
            for (int i = 0; i < numeroElectrodomestico; i++)
            {
                if (stock[i] == 0) 
                {
                    printf("Código: %d, Descripción: %s\n", codigo[i], descripcion[i]);
                }
            }
            break;

        case 4:
            printf("Listado de productos:\n");
            for (int i = 0; i < numeroElectrodomestico; i++) {
                printf("Código: %d, Descripción: %s, Stock: %d\n", codigo[i], descripcion[i], stock[i]);
            }
            break;

        case 5:
            printf("Saliendo del programa.\n");
            break;

        default:
            printf("Opcion no valida.\n");
            break;
        }




    }while(opcion != 5);

    system("pause");
}