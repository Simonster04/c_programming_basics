/*Estructuras selectivas:
Hacer que se ejecuten ciertas lineas del código en función de una condición
*/
#include <stdio.h>

int main()
{

	int x = 5;
	int y;

	if (x == 5) /*Operadores de comparación: ==, !=, <, > <=, >=*/
	{
		printf("El valor de x es 5\n");
	}
	else
	{
		printf("El valor de x no es 5\n");
	}

/*Ejercicio: Declarar una variable int e iniciarla con un valor entre 1 y 10. Por teclado, solicitar un número y comparalos*/

        printf("Ingrese un número: ");
	scanf("%d", &y);

	if (x == y)
	{
		printf("\nAcertaste! x es %d y tu ingresaste %d\n", x, y);
	}
	else
	{
		printf("\nPerdiste! x es %d y tu ingresaste %d\n", x, y);
	}

	return (0);
}
