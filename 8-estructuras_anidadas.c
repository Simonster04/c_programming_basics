/*Ejercicio: realizar un programa que lea un número entre 1 y 4 y devuelva el día de la semana correspondiente*/

#include <stdio.h>

int main()
{
	int x;

	printf("Introduzca un número de 1 a 4: ");
	scanf("%i", &x);

	if (x == 1)
	{
		printf("Lunes\n");
	}
	else if (x ==2)
	{
		printf("Martes\n");
	}
	else if (x == 3)
	{
		printf("Miércoles\n");
	}
	else if (x == 4)
	{
		printf("Jueves\n");
	}
	else
	{
		printf("El número introducido es incorrecto\n");
	}

	return (0);
}
