#include <stdio.h>

int main ()
{
	int x; /*número sin decimales entr -32768 y 32767 (2^16)*/
	float y, z; /*número con decimales. Ocupan más espacio, por lo que no se usan siempre (2^32)*/
	double y2; /*igual que el flotante, pero 2^64*/
	char w; /*entiende caracteres. Si se ingresaun número, lo entiende como ASCII*/

	x = 6; /*inicializar x*/
	y = 6.5; /*inicializar y*/
	z = 6; /*inicializar z*/
	y2 = 67.57; /*inicializar y2*/
	w = 'a'; /*inicializar w*/

	printf("Valor de x: %i.\n", x); /*imprimir en pantalla*/
	printf("Valor de y: %f.\n", y); /*imprimir en pantalla*/
	printf("Valor de z: %f.\n", z); /*imprimir en pantalla*/
	printf("Valor de y2: %f.\n", y2); /*imprimir en pantalla. Mismo símbolo que float pues es un float grande*/
	printf("Valor de w: %c.\n", w); /*imprimir en pantalla*/

	printf("Valor de x: %i.\nValor de y: %f.\n", x, y); /*imprimir en pantalla varias variab juntas*/

	return (0);
}
