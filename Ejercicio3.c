//ENMANUEL COLINA V.-29.955.728
#include <stdio.h>
#include <stdlib.h>

int cantidad, listo, resultado;
int i;

int main(){
  printf("Con este programa podras calcular de manera aleatoria la persona que pagara la cuenta\n\n");
  printf("En el programa, se mostraran una lista de numeros, cada persona tomara uno y luego de forma aleatoria se elige un numero, la persona que lo haya tomado, pagara\n\n");
  
  printf("Ingrese la cantidad de personas que seran (MINIMO 2): ");
  scanf("%d", &cantidad);
  if(cantidad < 2){
    printf("No es valido, debe ser mayor o igual a 2 personas\n");
    exit(0);
  }
  
  printf("Cada quien tome un numero (Uno por persona). Los numeros seran: \n");
  for(i = 1; i<=cantidad; i++){
    printf("%d\n", i);
  }

  printf("Cuando estes listo para ver el resultado presiona 1\n");
  scanf("%d", &listo);
  if(listo != 1){
    printf("Elegiste un numero diferente a 1, vuelve a intentarlo\n");
  }else{
    resultado = rand () % (cantidad-1+1) + 1;
    printf("La persona que pagara es la NUMERO %d\n\n", resultado);
  }
  
system("pause");
return 0;
}
