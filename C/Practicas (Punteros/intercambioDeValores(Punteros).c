#include <stdio.h>

void intercambiar(int* ptr1, int* ptr2) {

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

int main () {

    int num1,num2;

    printf("Ingrese numero 1: \n");
    scanf("%d",&num1);

    printf("Ingrese numero 2: \n");
    scanf("%d",&num2);

    printf("Valores : a = %d, b = %d\n", num1, num2);

    intercambiar(&num1,&num2);

    printf("Valores intercambiados: a = %d, b = %d\n", num1, num2);

    return 0;
}