/*Estructuras iterativas o bucles. Repetir n cantidad de veces ciertas lineas de código*/
/*while, for and do...while*/

/*Ejercicio: Leer dos números y mostrar en pantalla los números comprendidos entre esos dos números*/


#include <stdio.h>

int main()
{
	int i, n2, n1;

	printf("\nIngrese el primer número: ");
	scanf("%d", &n1);

	printf("\nIngrese el segundo número (Mayor que el anterior): ");
	scanf("%d", &n2);

	if (n1 > n2)
	{
		printf("\n\"Mayor que el anterior!!\" PENDEJO\n\n");
		return (-1);
	}

	for (i = (n1 + 1); i < n2; i++)
	{
		printf("[%d]\n", i);
	}

/* LO MISMO PERO CON WHILE:

	i = (n1 + 1);
	while (i < n2)
	{
		printf("[%d]\n", i);
		i++;
	}*/


	return (0);
}
