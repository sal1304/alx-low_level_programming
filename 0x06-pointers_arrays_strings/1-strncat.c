#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthDest, lengthSrc;

	lengthDest = 0;
	lengthSrc = 0;

	while (*(dest + lengthDest) != '\0')
		lengthDest++;

	while (*(src + lengthSrc) != '\0' && lengthDest < 97 && lengthSrc < n)
	{
		*(dest + lengthDest) = *(src + lengthSrc);
		lengthDest++;
		lengthSrc++;
	}
	*(dest + lengthDest) = '\0';

	return (dest);
}
