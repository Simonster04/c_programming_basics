/*Ejercicio: Ordenar un vector de 10 enteros de menor a mayor mediante una función*/

#include <stdio.h>

void ordenar(int *x);
void imprimir(int *x);

int main()
{
        int v[10] = {5, 7, 7, 9, 8, 5, 6, 1, 2, 3};

	imprimir(v);
        ordenar(v);

        return (0);
}

void ordenar(int *x)
{
        int i, j, aux;

        for (i = 0; i < 10; i++)
        {
                for (j = i; j < 10; j++)
		{
			if (x[i] > x[j])
			{
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
			printf("%d ", x[i]);
        }
        putchar('\n');
        putchar('\n');
}

void imprimir(int *x)
{
        int i;

        for (i = 0; i < 10; i++)
        {
                printf("%d ", x[i]);
        }
        putchar('\n');
        putchar('\n');
}
