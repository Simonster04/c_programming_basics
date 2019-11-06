/*Darle valor a un array de 10 posiciones por teclado y leer los elementos*/

#include <stdio.h>

int main()
{
        int v[10], i;

	putchar('\n');
        for (i = 0; i < 10; i++)
        {
                printf("Ingrese un valor para la posición %d: ", i);
		scanf("%d", &v[i]);
        }
	putchar('\n');
	for (i = 0; i < 10; i++)
	{
		printf("El valor del array en %d es %i\n", i, v[i]);
	}

        putchar('\n');

        return (0);
}
