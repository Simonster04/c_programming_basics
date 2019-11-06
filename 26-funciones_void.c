/*Hacer con funciones de tipo void el factorial de un número*/
/*Las void se utilizan para hacer todo en la función y nada en el main*/

#include <stdio.h>

void factorial();


int main()
{
	factorial();

	return (0);
}

void factorial()
{
	int x, i, aux;

	printf("Introduce un número entero: ");
	scanf("%i", &x);

	for (i = 1; i <= x; i++)
	{
		aux *= i;
	}
	printf("%d! = %d\n", x, aux);

}
