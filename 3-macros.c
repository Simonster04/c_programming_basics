/* Operaciones con variables*/

#include <stdio.h>
#define PI 3.1416 /*MACRO*/

int main ()
{
	float z;
	int y;

	z = PI;
	printf("El valor de x es: %f\n", z);

	printf("introduce un valor para y: ");
	scanf("%i", &y); /*se introduce con &*/
	printf("El valor de y es: %i\n\n", y);

	z = z * y;

	printf("El nuevo valor de x es: %f\n", z);

	return (0);
}


