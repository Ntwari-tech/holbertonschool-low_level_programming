#include "holberton.h"
/**
 * _memset - f() name
 * Description: Fill memory with constant byte
 * @s: Our pointer
 * @b: The constant byte
 * @n: Byte of memory
 * Return:to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;


	for (h = 0; h < n; h++)
		s[h] = b;

	return (s);
}
