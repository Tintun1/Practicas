#include <stdio.h>

int main () {

    int positivos,num;
    int negativos = 0;

    for (int i = 1; i <= 5; i++)
    {
        
        printf("ingrese numero %d \n",i);
        scanf("%d",&num);

        if ( num > 0 )
        {
            positivos++;

        } else if ( num < 0 ) {

            negativos++;

        }
        

    }
    
    printf("negativos= %d y positivos %d \n",negativos,positivos);

    return 0;
}