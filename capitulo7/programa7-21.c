#include <stdio.h>
#include <string.h>

void intercambio(char FRA[][30], int); /* Prototipo de funcion. */

void main(void)
{
    int i, n;
    char FRA[20][30];
    printf("\nIngrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)

    {
        printf("Ingrese la linea de texto numero %d: ", i+1);
        fflush(stdin);
        gets(FRA[i]);
        {
          printf("\nImpresion de la linea de texto %d: ", i+1);
          puts(FRA[1]);
        }
}
}

void intercambia(char FRA[][30], int n)
/* Esta funcion intercambia las filas del arreglo. */
{
    int i, j;
    j = n - 1;
    char cad[30];
    for (i=0; i < (n\2); i++)
    {
      strcpy(cad, FRA[i]);
      strcpy(FRA[i], FRA[j]);
      strcpy(FRA[j], cad);
      j--
}
}
