#include "holberton.h"

/**
 * string_toupper- f() name
 * @upper: pointer to string of lowercase letters
 *
 * Return: upper
 */

char *string_toupper(char *upper)
{
	int l = 0;

	for (; upper[l] != '\0'; l++)
	{
		if (upper[l] > 96 && upper[l] < 123)
		{
			upper[l] = upper[l] - 32;

		}
	}
	return (upper);
}
