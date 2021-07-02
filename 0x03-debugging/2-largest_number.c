#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;
int xy;

if (a > b)
{
xy = a;
}

else
{
xy = b;
}
if (xy < c)
{
xy = c;
}
largest = xy;
return (largest);
}
