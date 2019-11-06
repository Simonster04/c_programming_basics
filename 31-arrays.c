/*Cómo utilizar vectores en una función y paso por referencia*/

#include <stdio.h>

void fun(int *a);
void imprimir(int *x);

int main()
{
	int v[2];

/*Para los vetores no hace falta hacer el paso por referencia*/
	fun(v);/*Para utilizar un array en una función basta con meter su nombre*/
	imprimir(v);
	return (0);
}

void fun(int *a) /*es igual a a[]*/
{
	int i;

	for (i = 0; i < 2; i++)
	{
		printf("Ingresa un valor para el vector: ");
		scanf("%d", &a[i]);
	}
}

void imprimir(int *x)
{
	int i;

	for (i = 0; i < 2; i++)
	{
		printf("%d ", x[i]);
	}
	putchar('\n');
	putchar('\n');
}
