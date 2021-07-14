#include "holberton.h"
/**
 * _strlen_recursion - f() name
 * Description: rtn Length of a str
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 1;

	if (*s != '\0')

		return (len + _strlen_recursion(s + 1));

	return (0);
}
