#include <stdio.h>

/* suma positiva.
  el programa, al recibir como datos N numero enteros, obttiene la suma de los enteros positivos.
I, N, NUM, SUM: variables de tipo enteros. */

void main(void)
{
  int I, N, NUM, SUM;
  SUM = 0;
  printf("Ingrese el numero de datos:");
  scanf("%d", &N);
  for (I=1; I<=N; I++)
    {
      printf("Ingrese el dato numero %d:\t", I);
      scanf("%d", NUM);
      if (NUM > 0)
         SUM = SUM + NUM;
    }
  printf("\nLa suma de los numero positivos es: %d", SUM);
}
