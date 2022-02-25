#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - returns the sum of all its parameters
* @n: vairable
* @...: place of the last parameter
* Return: If n == 0, return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	unsigned int add = 0;

	va_start(args, n);

	for (index = 0; index < n; index++)
		add += va_arg(args, int);

	va_end(args);

	return (add);
}
