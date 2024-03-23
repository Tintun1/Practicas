#include <stdio.h>

int sumaRecursiva(int n) {
    if (n == 0) {
        return 1;  
    } else {
        return n + sumaRecursiva(n - 1);  
    }
}

int main() {
    int num = 5;
    int resultado = sumaRecursiva(num);
    printf("la suma recursiva de %d es %d \n", num, resultado);
    return 0;
}