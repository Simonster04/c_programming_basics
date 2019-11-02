/*Ejercicio: realizar un programa que lea un número entre 1 y 4 y devuelva el día de la semana correspondiente*/

/* LIMITACIÓN DE SWITCH: Sólo utiliza variables de tipo int o char*/

/*Son más eficientes que los if anidados*/

/*Sin break, se ejecutaría la sentencia case actual y todas las sentencias siguientes que no tengan break*/

#include <stdio.h>

int main()
{
	int x;

	printf("Introduzca un número de 1 a 4: ");
	scanf("%d", &x);

	switch (x)
	{
		case 1:
		printf("Lunes\n");
		break;
		case 2:
		printf("Martes\n");
		break;
		case 3:
		printf("Miércoles\n");
		break;
		case 4:
		printf("Jueves\n");
		break;
		default:
		printf("El número no es válido\n");
		break;
	}

	return (0);
}
