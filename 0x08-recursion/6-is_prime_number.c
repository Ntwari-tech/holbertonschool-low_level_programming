#include "holberton.h"

/**
 * checkprime - f() name
 * @i: incrementing variable
 * @n: number to check
 *
 * Return: 1 if prime 0 if not prime
 */
int checkprime(int i, int n)
{

	if (n % i == 0)
		return (0);

if (i * i > n)
return (1);

	return (checkprime(i + 1, n));
}

/**
 * is_prime_number - checks if number is prime
 * @n: the number to check
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{

	if (n < 2)
		return (0);

	return (checkprime(2, n));

}
