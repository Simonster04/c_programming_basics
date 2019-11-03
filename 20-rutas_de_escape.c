/*Rutas de escape*/
/*Ejercicio: Comprobar que un número es primo*/

#include <stdio.h>

int main()
{
	int num = 0, i, j, aux;

	printf("\nIngrese un número: ");
	scanf("%d", &num);

	j = 0;

	for (i = 2; i < num && j != 1; i++)
	{
		aux = num % i;
		if (aux == 0)
                {
			j = 1;
		}
	}

	if (j == 1)
	{
		printf("%d no es un número primo\n\n", num);
	}
	else
	{
		printf("%d es un número primo\n\n", num);
	}

	return (0);
}
