#include <stdio.h>

int main()
{
	int x;

	printf("\nIntroduzcaun número: ");
	scanf("%d", &x);

	if ((x % 2) == 0)
	{
		printf("\nEl número %d es par\n\n", x);
	}
	else
	{
		printf("\nEl número %d es impar\n\n", x);
	}
	return (0);
}
