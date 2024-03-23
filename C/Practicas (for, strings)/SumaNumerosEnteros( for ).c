#include <stdio.h>

int main () {

int num;
int total = 0;

printf("Ingrese numero:", num);
scanf("%d", &num);

for (int i = 1; i < num; i++)
{
    
    total += i;

}

printf("La suma de todos los valores es : %d ", total);

    return 0;
}