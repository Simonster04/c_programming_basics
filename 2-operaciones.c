/*Usar este comando para compilar (lo requiere la librería math.h):
	gcc -o operaciones operaciones.c -lm
*/

#include <stdio.h>
#include <math.h>

int main ()
{
	int x, y;

	x = 10;
	y = 2;

	/*Operaciones básicas*/

	x += y;
	printf("El valor de x + y es: %i\n", x);

	x -= y;
	printf("El valor de x - y es: %i\n", x);

	x *= y;
	printf("El valor de x * y es: %i\n", x);

	x /= y;
	printf("El valor de x / y es: %i\n", x);

	x = x % y;
	printf("El valor de x resto y es: %i\n", x);

	x = 10;

	/*Operaciones con math.h*/
	x = pow (y, x);
        printf("El valor de y elevado a la x es: %i\n", x);

	x = sqrt (x);
        printf("El valor de raiz cuadrada de x es: %i\n", x);

	/*Operadores de incremento*/

	x++;
	printf("El valor de x++ es: %i\n", x);

	x--;
	printf("El valor de x-- es: %i\n", x);

	return (0);
}
