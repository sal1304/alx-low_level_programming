#include "main.h"

/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */

void reverse_array(int *a, int n)
{
	int d, b, c;

	b = 0;
	c = n - 1;
	while (b < c)
	{
		d = *(a + b);
		*(a + b) = *(a + c);
		*(a + c) = d;
		b++;
		c--;
	}
}
