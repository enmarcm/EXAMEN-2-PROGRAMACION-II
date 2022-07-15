//ENMANUEL COLINA V.-29.955.728


#include <stdio.h>
#include <stdlib.h>

char entrada[100];
int i = 0;

int main(){
	
    printf("Introduzca una cadena de texto de hasta 100 caracteres: \n");
    gets(entrada);
    printf("La cadena introducida es: %s\n", entrada);
    printf("La cadena al reves es: ");
    
	for (i=strlen(entrada); i>=0; i--){
        printf("%c", entrada[i]);
    }
    
    printf("\n\n");


system("pause");
return 0;
}
