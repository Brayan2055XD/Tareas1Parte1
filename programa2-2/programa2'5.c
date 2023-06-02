#include <stdio.h>
#include <math.h>

/* Funcion matematica.
EL programa obtiene el resultado de una funcion.

OP y T: variables de tipo enetero.
RES: variable de tipo real. */

void main(void)
{
    int OP, T;
    float RES;
    printf("Ingrese la opcion del calculo y el valor entero: ");
    scanf("%d %d", &OP, &T);
    {
        case 1: RES = T / 5;
        break;
        case 2: RES = pow(T,T);
        /* la funcion pow esta definida en la biblioteca math.h */
        break;
        case 3:
        case 4: res = 6 * T/2;
           break;
        default: RES = 1;
           break;
    }
    printf("\nResultado:        %7.2f", RES);
}
