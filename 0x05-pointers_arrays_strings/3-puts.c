#include "holberton.h"
/**
 * _puts - F() name
 *
 * Description: f() to retuen the length of a string
 *
 * @str: pointer
 *
 * Return:an int
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
