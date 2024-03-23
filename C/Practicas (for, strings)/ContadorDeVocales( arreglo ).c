#include <stdio.h>

int main () {

    char palabra[10];
    int contador = 0;

    printf("Ingrese una palabra: \n");
    scanf(" %c", &palabra);

    fgets(palabra, sizeof(palabra), stdin);

    for (int i = 0; i < 10; i++)
    {
        
        if ( palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u' ) {

            contador++;

        }

    }
    
    printf("Tiene %d vocales.", contador);

}