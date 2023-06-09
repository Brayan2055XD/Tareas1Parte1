#include <stdio.h>

/* nomina
el programa al recibir los salarios de 15 profesores, obtiene el total de ka nomina de la universidad.
I: variable de tipos enteros.
SAL y NOM: variable de tipo entero. */

void main(void)
{
  int I;
  float SAL, NOM;
  NOM = 0;
  for (I=1; I<=15; I++)
    {
      printf("\ingrese el salario del profesor%d:\t", I);
      scanf("%f", &SAL);
      NOM = NOM + SAL;
    }
  printf("\nEl total de la nomina es: %.2f", NOM);
}
