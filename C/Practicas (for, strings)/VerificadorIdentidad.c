#include <stdio.h>

int main () {

    // la clave correcta es 456
    int claveCorrecta = 456;
    int clave;
    int intentos = 3;


    while ( intentos > 0 )
    {
        
        printf("ingrese la clave \n");
        scanf("%d",&clave);

    
        if ( clave == claveCorrecta )
        {
           
            printf("Acceso otorgado");
            intentos = 0;

        } else {

            intentos--;
            printf("La clave es incorrecta, %d intentos restantes\n",intentos);
            

        } 
    }

    printf("Acceso denegado\n");



    return 0;
}