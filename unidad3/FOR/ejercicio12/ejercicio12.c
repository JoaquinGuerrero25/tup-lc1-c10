#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, j, k;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("@");
        }
        printf("\n");
    }
    system("pause");
}