#include <stdio.h>

int main () {

    int num1, num2, temp;
    int *ptr1, *ptr2;

    printf("Ingrese numero 1: \n");
    scanf("%d",&num1);

    printf("Ingrese numero 2: \n");
    scanf("%d",&num2);

    ptr1 = &num1;
    ptr2 = &num2;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Valores intercambiados:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;

}