// Un comercio de ventas de accesorios para celulares nos solicita hacer un sistema de
// control de stock. Como máximo poseerá 100 accesorios y no necesariamente debe
// cargar todos los productos juntos. Cada producto al ingresar debe tener un codigo de
// barras y una cantidad en stock.
// Deberá tener un menú con las siguientes opciones:
// 1. Cargar un producto.
// 2. Modificar Stock.
// 3. Mostrar productos sin stock.
// 4. Salir.
// Resolver el ejercicio utilizando funciones.

#include <stdio.h>
#include <stdlib.h>

void mostrarMenu();
void cargarProducto(int productos[][2], int *numProductos, int maxProductos);
void modificarStock(int productos[][2], int numProductos);
void mostrarProductosSinStock(int productos[][2], int numProductos);

int main()
{
    int max_productos = 100, opcion;
    int productos[100][2];
    int numProductos = 0;

    do
    {
        mostrarMenu();
        printf("Ingrese el número de la opción que desee: ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            cargarProducto(productos, &numProductos, max_productos);
            break;
        case 2:
            modificarStock(productos, numProductos);
            break;
        case 3:
            mostrarProductosSinStock(productos, numProductos);
            break;
        default:
            break;
        }

    } while (opcion != 4);

    system("pause");

    return 0;
}

void mostrarMenu() {
    printf("Menú:\n");
    printf("1. Cargar un producto\n");
    printf("2. Modificar Stock\n");
    printf("3. Mostrar productos sin stock\n");
    printf("4. Salir\n");
}

void cargarProducto(int productos[][2], int *numProductos, int maxProductos)
{
    if (*numProductos < maxProductos)
    {
        printf("Ingrese el código de barras: ");
        scanf("%i", &productos[*numProductos][0]);

        printf("Ingrese la cantidad de stock: ");
        scanf("%i", &productos[*numProductos][1]);

        (*numProductos)++; // Incrementa el valor de numProductos fuera de la función
    }
    else
    {
        printf("Se alcanzó el límite de productos.\n");
    }
}

void modificarStock(int productos[][2], int numProductos)
{
    if (numProductos > 0)
    {
        int codigo;
        int encontrado = 0;

        printf("Ingrese el código de barras del producto a modificar: ");
        scanf("%i", &codigo);

        for (int i = 0; i < numProductos; i++)
        {
            if (productos[i][0] == codigo)
            {
                encontrado = 1;
                printf("Producto encontrado: Código de Barras: %i, Stock actual: %i\n", productos[i][0], productos[i][1]);

                printf("Ingrese la nueva cantidad en stock: ");
                scanf("%i", &productos[i][1]);

                printf("Stock actualizado correctamente.\n");
                break;
            }
        }

        if (!encontrado)
        {
            printf("Producto no encontrado.\n");
        }
    }
    else
    {
        printf("No hay productos para modificar.\n");
    }
}

void mostrarProductosSinStock(int productos[][2], int numProductos)
{
    int sinStock = 1;

    if (numProductos > 0)
    {
        printf("Productos sin stock:\n");
        for (int i = 0; i < numProductos; i++)
        {
            if (productos[i][1] == 0)
            {
                printf("Código de Barras: %i\n", productos[i][0]);
                printf("Stock: %i\n", productos[i][1]);
                sinStock = 0;
            }
        }

        if (sinStock)
        {
            printf("No hay productos sin stock.\n");
        }
    }
    else
    {
        printf("No hay productos para mostrar.\n");
    }
}