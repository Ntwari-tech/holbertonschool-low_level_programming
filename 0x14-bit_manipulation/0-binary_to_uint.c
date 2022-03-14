#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer
* Return: converted number, or 0 if
*
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int y;

	if (b == NULL)
		return (0);

	for (y = 0; *b; b++)
	{
		if ((*b != '0') && (*b != '1'))
		return (0);
		if (*b == '1')
			y = (y << 1) | 1;
		else if (*b == '0')
			y <<= 1;
		else
			break;
	}
	return (y);
}
