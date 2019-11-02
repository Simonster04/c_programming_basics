/*Condiciones múltiples*/

/*Ejercicio: hacer un programa que indique si un número ingresado por teclado está entre 1 y 10 o si no lo está*/

#include <stdio.h>

int main()
{
	int x;

	printf("Ingrese un número: ");
	scanf("%d", &x);

	if (x <= 10 && x >=1)
	{
		printf("El número %d está entre 1 y 10\n", x);
	}
	else
	{
		printf("El número %d no está entre 1 y 10\n", x);
	}

	return (0);
}
