#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante estudiantes[3];

    for (int i = 0; i < 3; i++) {
        printf("Ingrese los datos del estudiante %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", estudiantes[i].nombre);
        printf("Edad: ");
        scanf("%d", &estudiantes[i].edad);
        printf("Promedio: ");
        scanf("%f", &estudiantes[i].promedio);
        printf("\n");
    }

    printf("Datos de los estudiantes:\n");
    for (int i = 0; i < 3; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Promedio: %.2f\n", estudiantes[i].promedio);
        printf("\n");
    }

    return 0;
}
