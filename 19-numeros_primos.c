/*Ejercicio: Comprobar que un número es primo*/

#include <stdio.h>

int main()
{
	int num = 0, i;

	printf("\nIngrese un número: ");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d no es un número primo\n\n", num);
			break;
		}
		else
		{
			printf("%d es un número primo\n\n", num);
			break;
		}
	}
	return (0);
}
