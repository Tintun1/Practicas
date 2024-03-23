#include <stdio.h>

int main () {

    int num;

    printf("Hola ingrese un numero\n");
    scanf("%i",&num);

    while ( num == 1 )
    {
        
        printf("Hola ingrese un numero\n");
        scanf("%i",&num);
 

    }
    

    return 0; 
}