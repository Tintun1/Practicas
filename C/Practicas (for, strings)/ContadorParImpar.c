#include <stdio.h>

int main () {

    int num;
    char ParImpar;

    printf("Ingrese numero para iniciar conteo: \n");
    scanf("%d",&num);
    printf("Ingrese P o I para seleccionar tipo: \n");
    scanf(" %c",&ParImpar);

    if ( ParImpar == 'P') {
            
            printf("Has seleccionado el tipo de conteo Par \n");
    }

    if ( ParImpar == 'I') {
            
            printf("Has seleccionado el tipo de conteo Impar \n");
    }

    for ( int i = 1; i <= num; i++) {

        if ( ParImpar == 'P') {
            
            if ( i % 2 == 0 ) {
                printf("%d \n",i);
            }  

        }

        if ( ParImpar == 'I') {
            
            if ( i % 2 != 0 ) {
                printf("%d \n",i);
            }  
            
        }

    }
    


}