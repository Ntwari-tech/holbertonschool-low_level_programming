#include "holberton.h"
/**
 * print_line - fucntion name
 * @n: the #* ("_") is printed
 * Description: draw a straight line(several underscores)
 * Return: If n is 0 or less, the function should only print \n
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
