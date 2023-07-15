#include <stdio.h>
#include <stdlib.h>

void agregarAlumno(FILE *archivo) {
    char nAlumno[50] = "";
    char materia[50] = "";
    float p1 = 0.0;
    float p2 = 0.0;
    float p3 = 0.0;
    float promedio = 0.0;

    printf("\nIngresa Nombre Alumno: ");
    scanf("%s", nAlumno);

    printf("\nIngresa Nombre Materia: ");
    scanf("%s", materia);

    printf("\nIngresa Valor Parcial 1: ");
    scanf("%f", &p1);

    printf("\nIngresa Valor Parcial 2: ");
    scanf("%f", &p2);

    printf("\nIngresa Valor Parcial 3: ");
    scanf("%f", &p3);

    promedio = (p1 + p2 + p3) / 3.0;

    printf("|MATERIA|\t|ALUMNO|\t|P1|\t|P2|\t|P3|\t|PROMEDIO|\n");
    printf("%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", materia, nAlumno, p1, p2, p3, promedio);

    fprintf(archivo, "%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", materia, nAlumno, p1, p2, p3, promedio);
}

void leerArchivo(FILE *archivo) {
    char caracter;

    printf("\nContenido del archivo:\n");

    while ((caracter = fgetc(archivo)) != EOF) {
        printf("%c", caracter);
    }

    printf("\n");
}

int main() {
    FILE *archivo;
    archivo = fopen("arc8.txt", "a+");

    int opcion;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Agregar alumno\n");
        printf("2. Leer archivo\n");
        printf("3. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarAlumno(archivo);
                break;
            case 2:
                leerArchivo(archivo);
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
                break;
        }
    } while (opcion != 3);

    fclose(archivo);
    return 0;
}
