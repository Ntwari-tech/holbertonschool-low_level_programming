#include "main.h"

int _prime(int n, int i);
/**
* is_prime_number - main function
* @n: variable
*
* Return: 1 or zero
*/
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
/**
* _prime - prime chk
* @n: int
* @i: int
* Return: rtn fctn
*/
int _prime(int n, int i)
{
	if (n <= 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (_prime(n, i + 1));
}
