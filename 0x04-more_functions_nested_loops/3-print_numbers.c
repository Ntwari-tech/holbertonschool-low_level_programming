#include "holberton.h"
/**
 * print_numbers - is the funtion name
 *
 * description: displays int from 0-9
 *
 * return: zero
 **/

void print_numbers(void)

{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
