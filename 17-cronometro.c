/*HACER UN CRONÓMETRO*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int h, min, seg, mseg = 1000;/*mseg se inicializa en 1000 porque son los milisegundos*/

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			for (seg = 0; seg < 60; seg++)
			{
				printf("%02d:%02d:%02d\n", h, min, seg);
				usleep(1000 * mseg);
				system("clear");
			}
		}
	}

	return (0);
}
