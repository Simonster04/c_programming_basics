#include <stdio.h>

int main()
{
        int i, n2, n1;

        printf("\nIngrese el primer número: ");
        scanf("%d", &n1);

	do{
		printf("\nIngrese el segundo número (Mayor que el anterior): ");
		scanf("%d", &n2);

	}while (n2 <= n1);


        for (i = (n1 + 1); i < n2; i++)
        {
                printf("[%d]\n", i);
        }
	return (0);
}
