#include <stdio.h>
#include <math.h>
int sumaProgresion(int x, int n); /* prototipo de funcion */

int main() {
    int x, n;
    int res;
    printf("Introduzca dos numeros: ");
    scanf("%d %d", &x, &n);
    res = sumaProgresion(x, n); /* llamada a la funcion */
    printf("El maximo es %d\n", res);
    return 0;
}

int sumaProgresion(int x, int n) /* definicion de la funcion */ {
    int resultado = 0;
    for (int i = n; i >= 0; i--)
    {
        resultado = resultado + pow (x, i);
    }  
    return resultado; /* devuelve el valor maximo */
}