#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;  // Caso base: factorial de 0 es 1
    } else {
        return n * factorial(n - 1);  // Llamada recursiva para calcular el factorial de n
    }
}

int main() {
    int num = 5;
    int resultado = factorial(num);
    printf("El factorial de %d es %d \n", num, resultado);
    return 0;
}