#include <stdio.h>

int esPar (int i) {

    if ( i % 2 == 0)
    {
        
        return 1;

    } else {

        return 0;

    }
    
    

}

int main () {

    int num;

    printf("Ingrese numero: \n");
    scanf("%d", &num);

    if ( esPar(num) ) {

        printf("El numero es par: %d \n", num);

    } else {

        printf("El numero es impar: %d \n", num);

    }



    return 0;
}