#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int lengthDest, lengthSrc;

	lengthDest = 0;
	lengthSrc = 0;

	while (*(dest + lengthDest) != '\0')
		lengthDest++;

	while (*(src + lengthSrc) != '\0' && lengthDest < 97)
	{
		*(dest + lengthDest) = *(src + lengthSrc);
		lengthDest++;
		lengthSrc++;
	}
	*(dest + lengthDest) = '\0';
	return (dest);
}
