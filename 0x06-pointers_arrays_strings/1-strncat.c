#include "holberton.h"

/**
 * _strncat- concatentating two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;


	for (; dest[x] != '\0'; x++)
		continue;

	for (y = 0; src[y] != '\0' && n > 0; n--, y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
