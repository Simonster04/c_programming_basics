/*Ejercicio: todos los números primos desde 2 a 2000*/


#include <stdio.h>

int main()
{
	int i, j, aux, k;

	for (i = 2; i < 1999; i++)
	{
		for (j = 2; j < i && k != 1; j++) /*Ruta de escape = && k != 1*/
		{
			aux = i % j;
			if (aux == 0)
			{
				k = 1;
			}
		}
		if (k != 1)
		{
			printf("%i ", i);
		}
		k = 0;
	}
	printf("\n");
	return (0);
}
