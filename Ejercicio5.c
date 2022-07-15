//ENMANUEL COLINA V.-29.955.728

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valor, aux;
int i;

int main(){
	printf("Con este programa puedes verificar si un numero es primo\n");
	printf("Ingresa el numero que deseas verificar: ");
	scanf("%d", &valor);
	
	if(valor < 2){
		printf("No se aceptan valores menores a 2\n");
		exit(0);
	}else{
		for(i = 2; i<valor; i++){
			if(valor % i == 0){
				printf("El numero %d NO es primo\n", valor);
				exit(0);
			}
		}
		
		printf("El numero %d es primo\n", valor);
		
}
	
	
system("pause");
return 0;
}
