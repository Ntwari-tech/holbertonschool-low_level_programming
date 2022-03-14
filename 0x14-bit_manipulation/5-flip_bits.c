#include "main.h"

unsigned int countSetBits(unsigned long int n);
/**
* countSetBits - finds bits of a flip
* @n: the number to reset
* Return: number of bits
*/

unsigned int countSetBits(unsigned long int n)
{
	unsigned int find = 0;

	while (n > 0)
	{
		find++;
		n &= (n - 1);
	}
	return (find);
}
/**
* flip_bits - find the bits of a flip
* @n: variable
* @m: index
* Return: 1 / -1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
