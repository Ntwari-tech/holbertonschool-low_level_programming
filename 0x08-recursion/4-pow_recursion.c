#include "holberton.h"
/**
 * _pow_recursion - prototype function
 *
 * Description: return the value of x raised by the power of y
 *
 * @x: value 1
 *
 * @y: value 2
 *
 * Return: if y lower than 0 return -1
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
