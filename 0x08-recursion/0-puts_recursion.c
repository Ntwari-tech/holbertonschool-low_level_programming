#include "holberton.h"
/**
 * _puts_recursion - f() name
 * Description: print a "str\n"
 * @s: pointer
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{

		_putchar(*s);

		_puts_recursion(s + 1);
	}

	else if (*s == '\0')
		_putchar('\n');
}
