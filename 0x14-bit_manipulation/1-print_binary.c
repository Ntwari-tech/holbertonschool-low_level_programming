#include "main.h"

/**
* print_binary - prnts the binary rep of number
* @n: variable
*
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
