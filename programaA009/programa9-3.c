#include <stdio.h>

void main(void)
{
    char cad[50];
    int res;
    FILE *ar;

    if ((ar = fopen("arc.txt", "w")) != NULL)
    {
        printf("\n¿Desea ingresar una cadena de caracteres? Sí-1 No-0:");
        scanf("%d", &res);

        while (res)
        {
            fflush(stdin);
            printf("Ingrese la cadena: ");
            gets(cad);
            fputs(cad, ar);

            printf("\n¿Desea ingresar otra cadena de caracteres? Sí-1 No-0:");
            scanf("%d", &res);

            if (res)
                fputs("\n", ar);
            /* Se indica un salto de línea, excepto en la última cadena.
               Si no se hiciera esta indicación, la función fputs pegaría
               las cadenas y luego tendríamos dificultades en el momento
               de leerlas. Por otra parte, si realizáramos este salto de
               línea al final de la última cadena, en la escritura se
               repetiría la última cadena. */
        }

        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }
}
