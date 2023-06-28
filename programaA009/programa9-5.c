#include <stdio.h>

void main(void)
{
    int i, j, n, mat;
    float cal;
    FILE *ar;

    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);

    if ((ar = fopen("arc8.txt", "w")) != NULL)
    {
        fprintf(ar, "%d ", n);

        for (i = 0; i < n; i++)
        {
            printf("Ingrese la matrícula del alumno %d: ", i + 1);
            scanf("%d", &mat);
            fprintf(ar, "\n%d ", mat);

            for (j = 0; j < 5; j++)
            {
                printf("Calificación %d: ", j + 1);
                scanf("%f", &cal);
                fprintf(ar, "%.2f ", cal);
            }
        }

        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }
}

