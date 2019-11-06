/*Qué son los punteros y el paso por referencia*/

#include <stdio.h>

void cambio(int *a, int *b, int c);

int main()
{
	int x = 5, y = 10, z = 20;

	cambio(&x, &y, z);

	printf("El valor actual de x es %d y el de y es %d. x es %d\n", x, y, z);
/*z no cambiará de valor, ya que no comparte el mismo espacio de memoria que c*/
	return (0);
}

void cambio(int *a, int *b, int c) /*(a = &x) == (*a = x)*/
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
	c = 100;
/*z no cambiará de valor, ya que no comparte el mismo espacio de memoria que c*/
}

