#include "holberton.h"
/**
 * more_numbers - our prototype
 * Description: Print 0-14 10x
 * Return: Null
 */
void more_numbers(void)
{
	int x;
	int y;

	/* prints 10x */
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
				_putchar('0' + y / 10);
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
