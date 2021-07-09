#include "holberton.h"
/**
 * print_diagonal - function name
 *
 * @n: #* this ("\") shoulbe be printed
 *
 * Description: draw a diaginal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{

		for (x = 1; x <= n; x++)
		{
			for (y = 0; y < x - 1; y++)

				_putchar(' ');

			_putchar('\\');

			_putchar('\n');

		}
	}
	else
		_putchar('\n');

}
