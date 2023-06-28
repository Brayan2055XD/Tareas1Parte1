#include <stdio.h>

typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *);

void main(void)
{
    FILE *ar;

    if ((ar = fopen("ad1.dat", "rb")) != NULL)
    {
        lee(ar);
        fclose(ar);
    }
    else
    {
        printf("\nEl archivo no se puede abrir");
    }
}

void lee(FILE *ap)
{
    alumno alu;

    fread(&alu, sizeof(alumno), 1, ap);

    while (!feof(ap))
    {
        printf("\nMatr�cula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %f", alu.promedio);
        printf("\t");
        puts(alu.nombre);

        fread(&alu, sizeof(alumno), 1, ap);
    }
}

