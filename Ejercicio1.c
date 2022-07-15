//CON ESTE PROGRAMA SE CALCULAN FUNCIONES TRIGONOMETRICAS
//ENMANUEL COLINA V.-29.955.728

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
	
int selector;
float valor, resultado;

int main(){

    printf("Con este programa podras calcular diferentes funciones trigonometricas de los valores ingresados\n\n");
    printf("1.- SENO\n2.- COSENO\n3.- TANGENTE\n4.- ARCO-SENO\n5.- ARCO-COSENO\n6.- ARCO-TANGENTE\n");
    printf(": ");
    scanf("%d", &selector);
    
    switch(selector){
        case 1:
            printf("Ha seleccionado calcular SENO\n");
            printf("Ingrese el valor a calcular(EN RADIANES): ");
            scanf("%f", &valor);
            
            resultado = sin(valor);    
            printf("El SENO de %f es %f\n", valor, resultado);
        break;
        
        case 2:
            printf("Ha seleccionado calcular COSENO\n");
            printf("Ingrese el valor a calcular(EN RADIANES): ");
            scanf("%f", &valor);
            
            resultado = cos(valor);
            printf("El COSENO de %f es %f\n", valor, resultado);
        break;
        
        case 3:
            printf("Ha seleccionado calcular TANGENTE\n");
            printf("Ingrese el valor a calcular(EN RADIANES): ");
            scanf("%f", &valor);
            
            resultado = tan(valor);
            printf("LA TANGENTE de %f es %f\n", valor, resultado);
        
        break;
        
        case 4:
            printf("Ha seleccionado calcular ARCO-SENO\n");
            printf("Ingrese el valor a calcular (EN RADIANES). Debe estar en el intervalo de -1 y 1: ");
            scanf("%f", &valor);
            
            if(valor < -1 || valor > 1){
                printf("No se ingresó un valor aceptado\n");
                exit(0);
            }else{
                resultado = asin(valor);
                printf("El ARCO-SENO de %f es %f\n", valor, resultado);
            }
            
        break;
        
        case 5:
            printf("Ha seleccionado calcular ARCO-COSENO\n");
            printf("Ingrese el valor a calcular (EN RADIANES). Debe estar en el intervalo de -1 y 1: ");
            scanf("%f", &valor);
            
            if(valor < -1 || valor > 1){
                printf("No se ingreso un valor aceptado\n");
                exit(0);
            }else{
                resultado = acos(valor);
                printf("El ARCO-COSENO de %f es %f\n", valor, resultado);
            }
            
        break;
    
     case 6:
            printf("Ha seleccionado calcular ARCO-TANGENTE\n");
            printf("Ingrese el valor a calcular (EN RADIANES). Debe estar en el intervalo de -1 y 1: ");
            scanf("%f", &valor);
            
            if(valor < -1 || valor > 1){
                printf("No se ingreso un valor aceptado\n");
                exit(0);
            }else{
                resultado = acos(valor);
                printf("LA ARCO-TANGENTE de %f es %f\n", valor, resultado);
            }
            
        break;
        
        default:
            printf("No se ingreso una opcion valida\n");
            exit(0);
    }
    
    
system("pause");
return 0;
}
