#include "holberton.h"
#include <stdio.h>

/**
 * _isupper- checks for uppercase char
 * @c: int type
 * Return: 0 if uppercase, 1 if not
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

	return (1);

	else
		return (0);
}
