#include <stdio.h>
#include <string.h>

struct Libro
{
    
    char Titulo[50];
    char Autor[30];
    int Ano;
    float Precio;

};

int main(){

    struct Libro Libro1;
    
        
        printf("Ingrese titulo: \n");
        scanf(" %s",&Libro1.Titulo);

        printf("Ingrese autor: \n");
        scanf(" %s",&Libro1.Autor);

        printf("Ingrese año: \n");
        scanf(" %d",&Libro1.Ano);

        printf("Ingrese precio: \n");
        scanf(" %f",&Libro1.Precio);

        printf("Datos ingresados:\n");
        printf("Titulo: %s\n",Libro1.Titulo);
        printf("Autor: %s\n",Libro1.Autor);
        printf("Año: %d\n",Libro1.Ano);
        printf("Precio: %f\n",Libro1.Precio);

    
    
    return 0;
}