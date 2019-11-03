/*Calcular el factorial de dos números*/
/*Determinar si ciertos números son primos*/
/*Todo con funciones*/

#include <stdio.h>

int factorial();

int main()
{
	int n1, n2, fac1, fac2;

	printf("\nIntroduce el primer número para calcular factorial: ");
	scanf("%d", &n1);

	printf("Introduce el segundo número para calcular factorial: ");
	scanf("%d", &n2);

	fac1 = factorial(n1);
	fac2 = factorial(n2);

	printf("%d! = %d\n", n1, fac1);
	printf("%d! = %d\n\n", n2, fac2);

	return (0);
}


int factorial(int a)
{
	int i, fac = 1;

	for (i = a; i > 0; i--)
	{
		fac *= i;
	}

	return (fac);
}
