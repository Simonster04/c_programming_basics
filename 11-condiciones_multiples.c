/*Ejercicio: Escribirun programa que acepte 3 números, que serán horas, minutos y segundos,
y devuelvala hora que será dentro de un segundo, controlando que sea la hora correcta */

#include <stdio.h>

int main()
{
	int hora, minutos, segundos;

	printf("Introduzca Hora: ");
	scanf("%d", &hora);
	if (!(hora >= 0 && hora <= 23))
	{
		printf("La hora ingresada es incorrecta, ejecute el programa nuevamente\n");
		return(-1);
	}

	printf("Introduzca Minutos: ");
	scanf("%d", &minutos);
	if (!(minutos >= 0 && minutos <= 59))
	{
		printf("Los minutos ingresados son incorrectos, ejecute el programa nuevamente\n");
		return(-1);
	}

	printf("Introduzca los segundos: ");
	scanf("%d", &segundos);
	if (!(segundos >=0 && segundos <= 59))
	{
		printf("Los segundos ingresados son incorrectos, ejecute el programa nuevamente\n");
		return(-1);
	}


	if (hora <=23 && minutos <= 59 && segundos <= 59)
	{
		segundos++;
		if(segundos == 60)
		{
			segundos = 0;
			minutos++;
		}
		if (minutos == 60)
		{
			minutos = 0;
			hora++;
		}
		if (hora == 24)
		{
			hora = 0;
		}
	}

	printf("En un segundo será %d:%d:%d\n", hora, minutos, segundos);
	return (0);
}
