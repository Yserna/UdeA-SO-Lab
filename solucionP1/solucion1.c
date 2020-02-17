#include <stdio.h>

float calculateCommission(int value); /* prototipo de funcion */

int main() {
    int x;
    float commision;
    printf("Introduzca las ventas trimestrales: ");
    scanf("%d", &x);
    commision = calculateCommission(x); /* llamada a la funcion */
    printf("La comisión es %f\n", commision);
    return 0;
}

float calculateCommission(int value) /* definicion de la funcion */ {
    float commision;
    if (value > 0 && value <= 20000)
        commision = value * 0.05;
    else if (value > 20000 && value <= 50000) 
        commision = ((value - 20000)*0.07)+1000;
    else if (value > 50000)
        commision = ((value - 50000)*0.1)+3100;
    else 
        commision = 0;
    return commision; /* Calcula la comisión según el valor de venta */
}
