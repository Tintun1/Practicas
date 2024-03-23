#include <stdio.h>

int  suma(float n1, float n2) {

    float resultado = n1 + n2;
    return resultado;

}

int  resta(float n1, float n2) {

    float resultado = n1 - n2;
    return resultado;

}

int  division(float n1, float n2) {

    float resultado = n1 / n2;
    return resultado;

}

int  multiplicacion(float n1, float n2) {

    float resultado = n1 * n2;
    return resultado;

}

int potencia(float n1, float n2) {

    float resultado = 1;
    float contador = 0;
    while ( contador < n2)
    {
        
        resultado *= n1;
        contador++;
    }
    
    return resultado;
}

int main () {

    char selector;
    float num1,num2,resultado;

    printf("Bienvenido a la calculadora \nIngrese los datos necesarios para empezar \n+ = suma \n- = resta \n* = multiplicacion \n/ = division \ne = Potencias\n");

    printf("Ingrese 2 numeros para la operacion: \n");
    scanf("%f %c %f",&num1,&selector,&num2);

    switch (selector)
    {
    case '+':
        resultado = suma(num1,num2);
        break;
    
    case '-':
        resultado = resta(num1,num2);
        break;
    case '*':
        resultado = multiplicacion(num1,num2);
        break;
    
    case '/':
        resultado = division(num1,num2);
        break;
    case 'e':
        resultado = potencia(num1,num2);
        break;
    }

    printf("\nEl resultado es : %f",resultado);

    
    return 0;
}