#include <stdio.h>

int areaRectangulo (int l, int a) {

    int area = l * a;
    return area;

}


struct Rectangulo {

   int largo;
   int ancho;
   int area;

};


int main () {

    int cantidad;
    int resultado;

    printf("\nIngrese la cantidad de rectangulos para operar: \n");
    scanf("%d", &cantidad);

    struct Rectangulo Rectangulo[cantidad];
        
        for ( int i = 0; i < cantidad; i++) {

            printf("\nIngrese los valores del rectangulo %d\n", i + 1);

            printf("Ingrese el largo: \n");
            scanf("%d", &Rectangulo[i].largo);

            printf("Ingrese el ancho: \n");
            scanf("%d", &Rectangulo[i].ancho);

        }

        for ( int i = 0; i < cantidad; i++) {

            Rectangulo[i].area = areaRectangulo(Rectangulo[i].largo,Rectangulo[i].ancho);

            printf("\nEl area del rectangulo %d es igual a: %d \n", i + 1, Rectangulo[i].area);

        }

        for ( int i = 0; i < cantidad; i++) {

            resultado = Rectangulo[i].area + Rectangulo[i + 1].area

        }

    return 0;
}