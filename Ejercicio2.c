//ENMANUEL COLINA V.-29.955.728

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int selector;
float valor, resultado;
int main(){
	
	printf("Con este programa podras calcular el LOGARITMO NATURAL Y LOGARITMO BASE 10 de los valores que ingreses\n\n");
	printf("Selecciona una opcion para calcular\n");
	printf("1.-LOGARITMO NATURAL\n2.-LOGARITMO BASE 10\n9.-SALIR\n");
	printf(": ");
	scanf("%d", &selector);
	
	switch(selector){
		case 1:
			printf("Selecciono la opcion de LOGARITMO NATURAL\n");
			printf("Debe ingresar un valor MAYOR a 0\n");
			printf(": ");
			scanf("%f", &valor);
			
			if(valor <= 0){
				printf("Se ingreso un valor no aceptado\n");
				exit(0);
			}else{
				resultado = log(valor);
				printf("El LOGARITMO NATURAL DE %.2f es: %f\n", valor, resultado);
			}
		break;
		
		case 2:
			printf("Selecciono la opcion de LOGARITMO BASE 10\n");
			printf("Debe ingresar un valor MAYOR a 0\n");
			printf(": ");
			scanf("%f", &valor);
			
			if(valor <= 0){
				printf("Se ingreso un valor no aceptado\n");
				exit(0);
			}else{
				resultado = log10(valor);
				printf("El LOGARITMO BASE 10 DE %.2f es: %f\n", valor, resultado);
			}
			
		break;
		
		case 9:
			printf("Selecciono SALIR\n");
			printf("Gracias por usar el programa\n");
			exit(0);
		break;
		
		default:
			printf("No ingreso una opcion valida\n");
			exit(0);
	}
	
system("pause");
return 0;
}
