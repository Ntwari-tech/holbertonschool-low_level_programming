#include "holberton.h"
/**
 * print_most_numbers - Our prototype function
 * Description: print int 1 9 != 2 && 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}

	_putchar('\n');

}
