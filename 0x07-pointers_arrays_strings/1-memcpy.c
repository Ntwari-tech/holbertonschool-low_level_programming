#include "holberton.h"
/**
 * _memcpy - f() name
 * Description: f() that copy memory area
 * @dest: Memory area
 * @src: Memory area
 * @n: bytes copied
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h = 0;


	for (; h < n; h++)
	{

		dest[h] = src[h];
	}

	return (dest);
}
