#include "holberton.h"
/**
*jack_bauer - is the entry point
*
*@: is a charactor
*
*Return: The sum of the two parameters
*
*/
void jack_bauer(void)
{
int x;
int y;
for (y = 0; y < 24; y++)
for (x = 0; x < 60; x++)
{
_putchar(y / 10 + 48);
_putchar(y % 10 + 48);
_putchar(':');
_putchar(x / 10 + 48);
_putchar(x % 10 + 48);
_putchar('\n');
}
}
