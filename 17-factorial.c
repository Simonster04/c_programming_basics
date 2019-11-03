/*Ejercicio: hacer un Factorial de un número ingresado por teclado*/

#include <stdio.h>

int main()
{
	int num, i, fac = 1;

	printf("\nIngrese un número: ");
	scanf("%d", &num);

	for (i = num; i > 0; i--)
	{
		fac *= i;
	}

	printf("%d! = %d\n", num, fac);

	return (0);

}
