#include <stdio.h>

int main () {

    int num;
    int *ptr;

    printf("Ingrese numero: \n");
    scanf("%d",&num);
    printf("Numero: %d\n",num);

    ptr = &num;

    *ptr = 20;

    printf("Valor modificado: %d",num);

    return 0;
}