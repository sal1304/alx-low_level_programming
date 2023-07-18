#include "main.h"

/**
*main - print text as output
*
*Return:return 0
*/
int main(void)
{
	char a[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar(10);
	return (0);
}
