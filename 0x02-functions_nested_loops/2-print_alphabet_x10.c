#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters ten times
*Return: no return
*/
void print_alphabet_x10(void)
{
int counter = 0;
int l;
while (counter++ <= 9)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);

_putchar('\n');
}
}
