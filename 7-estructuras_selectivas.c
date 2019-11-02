#include <stdio.h>

int main()
{
	int x, y, z;

	printf("Introduzca el primer valor: ");
	scanf("%i", &x);

	printf("Introduzca el segundo valor: ");
	scanf("%i", &y);

	printf("Introduzca el tercer valor: ");
	scanf("%i", &z);

	if(x > y)
	{
		if (x > z)
		{
			printf("El mayor es %d\n", x);
		}
		else
		{
			printf("El mayor es %d\n",z);
		}
	}
	else
	{
		if (y > z)
		{
			printf("El mayor es %d\n", y);
		}
		else
		{
			printf("El mayor es %d\n", z);
		}
	}

	return (0);
}
