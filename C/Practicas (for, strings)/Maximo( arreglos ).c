#include <stdio.h>

int main () { 

    int num[5];
    int maximo = 0;

    for (int i = 0; i < 5; i++)
    {
        
        printf("ingrese el valor %d: ", i + 1);
        scanf("%d", &num[i]);
        
        if ( maximo < num[i] )
        {
            
            maximo = num[i];

        }
        

    }
    
    printf("\nEl maximo es : %d", maximo);


    return 0;
}