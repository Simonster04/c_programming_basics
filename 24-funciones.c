#include <stdio.h>

int maximo();

int main()
{
        int x = 3, y = 10, max;

	max = maximo(x, y);

        printf("El valor de x es %d y el de y es %d\n", x, y);
	printf("El máximo entre los dos es %d\n", max);
        return (0);
}

int maximo(int a, int b)
{
	int aux;

	if (a > b)
	{
		aux = a;
	}
	else
	{
		aux = b;
	}
        return (aux);
}
