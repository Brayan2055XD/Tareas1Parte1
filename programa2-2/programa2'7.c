#include <stdio.h>

/* ventas descendentes.
EL programa, al recibir como datos tres valores que representan
las ventas de los vendedores de una tienda de discos, escribe las ventas en orden
descendente.

P, S y R: variables de tipo real.  */

void main(void)
{
    float P, S, R;
    printf("\nIngrese las ventas de los tres vendedores:  ");
    scanf("%f %f %f", &P, &S, &R);
    if (P > S)
        if (P > S)
            if (P > S)
               printf("\n\n El orden es P, S y R: %8.2f %8.2f", P, S, R);
               else
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
               else
               printf("\n\n EL orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);
            else
                if (S > R)
                  if (S > R)
                  printf("\n\n El orden es S, P y R: %8.2f %82.f %8.2f", S, P, R);
            else
                printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
            else
                printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);


}
