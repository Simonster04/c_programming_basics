#include <stdio.h>

int maximo();

int main()
{
	int x = 3, y = 10;

	maximo(x, y);
	printf("El valor de x es %d y el de y es %d\n", x, y);
	return (0);
}

int maximo(int a, int b)
{
	a = 10; /*Se modifican los valores de x y y (?). La respuesta es NO*/
	b = 5; /*Si cmabiamos el valor de 'a' o 'b', a 'x' y a 'y' les da igual.*/
/*	printf("El valor de x es %d y el de y es %d\n", a, b);*/
	return (0);
}
