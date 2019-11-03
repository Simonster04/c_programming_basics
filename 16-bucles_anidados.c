/*Ejercicio: hacer las tablas de multiplicar*/

#include <stdio.h>

int main()
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		printf("\nTABLA DEL %d\n", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		if (i < 9)
		{
			printf("\nPresione ENTER para ver la tabla del %d\n", (i + 1));
			getchar();
		}
	}
	printf("\n");
	return (0);
}
