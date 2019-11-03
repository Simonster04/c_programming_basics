/*sucesión Fibonacci hasta un número ingresado por teclado*/
#include <stdio.h>

int main()
{
	int i, num, x = 0, y = 1, fib = 0;

	printf("\nIngrese un número: ");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("%d ", x);
	}
	else
	{
		printf("%d %d ", x, y);
	}

	for (i = 3; i <= num; i++)
	{
		fib = x + y;
		printf("%d ", fib);
		x = y;
		y = fib;
	}
	printf("\n\n");
	return (0);
}
