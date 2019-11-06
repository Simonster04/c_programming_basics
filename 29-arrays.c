/*array o vector: estructura que almacena varias variables del mismo tipo*/

#include <stdio.h>

int main()
{
	int i, v[] = {3, 5, 6, 8, 9};

	printf("El valor de la posición 0 es: %d\n", v[0]);

	for (i = 0; i < 5; i++)
	{
		printf("%i ", v[i]);
	}

	putchar('\n');

	return (0);
}


