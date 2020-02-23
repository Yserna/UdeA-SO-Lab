#include <stdio.h>

int main() {
	int renglones; 
	printf("Ingresa el numero de renglones: "); 
	
	scanf("%d", &renglones);   

  int num[renglones]; 
	
   for (int i = 1; i <= renglones; i++)
   {
       int aux = i%2;
       num[i-1] = aux;

       for (int j = i; j>0;j--) { 
		    printf("%d",num[j-1]); 
	}	
    printf("\n");
   }
	return 0;
}