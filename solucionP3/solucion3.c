#include <stdio.h>

int multiplo(int x, int y); /* prototipo de funcion */

int main() {
    int x, y;
    int result;
    printf("Introduzca un par de números: ");
    scanf("%d %d", &x, &y);
    result = multiplo(x, y); /* llamada a la funcion */
    printf("Si la respuesta es 1, el segundo número es múltiplo del primero: \n");
    printf("Respuesta: %d\n", result);
    return 0;
}

int multiplo(int x, int y) /* definicion de la funcion */ {
    if (x % y == 0)
        return 1;
    else 
        return 0; /* Calcula si el segundo parámetro es múltiplo del primero */
}