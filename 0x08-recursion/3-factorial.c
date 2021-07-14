#include "holberton.h"
/**
 * factorial - f() name
 * Decription: Return the factorial of #
 * @n: an int
 * Return: -1 || 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
		return (n * factorial(n - 1));


}
