#include "holberton.h"
/**
 * _puts - F() name
 *
 * Description: f() that prints a string
 *
 * @str: pointer
 *
 * Return:void
 */
void _puts(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{

		_putchar(str[i]);
	}

	_putchar('\n');

}
