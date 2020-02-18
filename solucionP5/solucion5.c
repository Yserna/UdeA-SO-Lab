#include <stdio.h>
#include <math.h>

float sumaSeries(int x, int n); /* prototipo de funcion */
int factorial(int x); /* prototipo de funcion */

int main() {
    int x, n;
    float suma;
    printf("Introduzca el valor de X: ");
    scanf("%d", &x);
    printf("Introduzca el número de términos: ");
    scanf("%d", &n);
    suma = sumaSeries(x, n); /* llamada a la funcion */
    printf("Suma: %f\n", suma);
    return 0;
}

float sumaSeries(int x, int n) /* definicion de la funcion */ {
    int i;
    float result = 1, term;
    for (i = 1; i < n; i++){
        term = (pow(x, 2*i))/factorial(2*i); 
        if (i % 2 != 0) {
            term = term * (-1);
        }
        result = result + term;
    }
    return result; /* Cacula la suma de la serie generada */
}

int factorial(int x) /* definicion de la funcion */ {
    int result = 1, i;
    for (i = 1; i <= x; i++){
        result = result * i;
    }
    return result; /* Calcula el factorial del valor recibido como parámetro */
}

