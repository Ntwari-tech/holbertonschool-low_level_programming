#include "holberton.h"
/**
*print_last_digit- is the entry point
*
*@x: is a inter
*
*Return: The sum of the two parameters
*
*/

int print_last_digit(int x)

{

if (x >= 0)
{
_putchar(x % 10 + '0');
return (x % 10);
}
else
{
_putchar(x % 10 * -1 + '0');
return (x % 10 * -1);
}

}
