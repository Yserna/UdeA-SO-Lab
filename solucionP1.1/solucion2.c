#include <stdio.h>

int generateMultiplicationTable(int finalNumber); /* prototipo de funcion */

int main() {
    int x;
    printf("Introduzca el valor final de la tabla de multiplicar: ");
    scanf("%d", &x);
    generateMultiplicationTable(x); /* llamada a la funcion */
    return 0;
}

int generateMultiplicationTable(int finalNumber) /* definicion de la funcion */ {
    int x, y;
    printf("Tabla de multiplicación desde 1 hasta %d:\n", finalNumber);
    for (x = 1; x <= finalNumber; x++){
        printf("\n");
        for (y = 1; y <= 10; y++){
            printf("%d x %d = %d, ", y, x, x*y);
        }
        printf("\n");
    }
    return 0;
}