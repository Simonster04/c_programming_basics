/*Comnparar si dos números diferentes son primos o no*/

#include <stdio.h>

int primos();

int main()
{
	int n1, n2, prim1, prim2;

	printf("Ingrese el primer número: ");
	scanf("%d", &n1);

	printf("Ingrese el segundo número: ");
	scanf("%d", &n2);

	prim1 = primos(n1);
	prim2 = primos(n2);

	if (prim1 == 1)
	{
		printf("%d no es un número primo\n", n1);
	}
	else
	{
		printf("%d es un número primo\n", n1);
	}

	if (prim2 == 1)
	{
		printf("%d no es un número primo\n", n2);
	}
	else
	{
		printf("%d es un número primo\n", n2);
	}
	return (0);
}

int primos(int a)
{
	int i, aux = 0;

	for (i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			aux = 1;
		}
	}
	return (aux);
}
