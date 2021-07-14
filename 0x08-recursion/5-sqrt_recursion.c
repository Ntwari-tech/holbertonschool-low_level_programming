#include "holberton.h"

/**
 * testsqrt - f() name
 * @x: var value
 * @n: number to find sq root of
 *
 * Return: Square root of n or -1
 */
int testsqrt(int x, int n)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	x++;
	return (testsqrt(x, n));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number to find sqare root of
 *
 * Return: -1 if n does not have natural square root; or square root of n
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (testsqrt(0, n));
	return (-1);
}
