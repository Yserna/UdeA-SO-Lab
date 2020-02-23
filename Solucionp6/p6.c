#include <stdio.h>

int main() {
	char numero[50]; 
	int tamano; 
	
	printf("Ingresa numero: "); 
	
	scanf(" %[^\n]", numero);     
	printf("\n");
	
	printf ("numero al revés \n");
	tamano = strlen(numero);
	for (int i = tamano-1; i>=0;i--) { 
		putchar(numero[i]); 
	}	
}
