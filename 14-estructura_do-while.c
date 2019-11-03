/*Ejemplos de do...while*/
/*Hcer un bucle que pregunte si queremos continuar y hasta que no pare hasta que escribamos la letra s*/

#include <stdio.h>

int main()
{
/*	int x = 15;

	do{
	printf("Esto se ejecutará al menos una vez, ya que la condición en el do...while es falsa\n");
	}while (x < 10)*/

	char c;

	do{
		printf("\nIntroduce una letra: ");
		scanf("%c", &c); /*Cuando recogemos una char, metemos la letra y pulsamos ENTER.
				Ese ENTER se queda en el buffer (en cola), por lo que el programa lo tomará como si hubiéramos ingresado otra letra*/
		getchar();/*Vaciar el buffer*/
	}while (c != 's' && c != 'S');

	return (0);
}
