#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
	int numero, i, n, j, temp;
	int vNumeros[10000];
	//generamos todos los n numeros aleatorios, entre 0 y 500
	printf("numero aleatorios a generar: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		numero = rand() % 500;
		vNumeros[i]=numero;
		printf("numero %d: %d \n", i+1, vNumeros[i]);
	}
	
	  // Ordenamos los números del vector vNumeros por el método de burbuja 
	  for (i = 0; i < (n - 1); i++) 
	  { 
	    for (j = i + 1; j < n; j++) 
	    { 
	      if (vNumeros[j] < vNumeros[i]) 
	      { 
	        temp = vNumeros[j]; 
	        vNumeros[j] = vNumeros[i]; 
	        vNumeros[i] = temp; 
	      } 
	    } 
	  } 
	  
	  // Mostramos los números ordenados
	  printf ("Los números ordenados son:\n"); 
	  for (i = 0; i < n; i++) 
	  { 
	    printf("%d, ", vNumeros[i]); 
	  } 
	  printf("\n\n\n"); 
	  system("PAUSE");  

}
