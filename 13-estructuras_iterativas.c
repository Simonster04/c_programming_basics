/*Ejercicio 1: calcular la media de n números introducidos por teclado*/

#include <stdio.h>

int main()
{

	int n, i, x, sum = 0;

	printf("\n¿Cuántos números desea ingresar para calcular la media?: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("#%d: ", i);
		scanf("%d", &x);
		sum += x;
	}

	printf("\nLa media aritmética de los números ingresados es: [%d]\n\n", (sum / n));

/*Ejercicio 2: Imprimir la suma de todos los números pares de 2 a 1000*/

	y = 0;
	for (i = 2; i <= 1000; i++)
	{
		sum += i;
	}

	printf("\nLa suma de todoslos números de 2 a 1000 es: [%d]\n\n", sum);

	return (0);
}
