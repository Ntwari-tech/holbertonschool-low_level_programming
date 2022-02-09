#include "main.h"

/**
 * _strlen_recursion - returns the len of the strng
 * @s: pointer to a string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
