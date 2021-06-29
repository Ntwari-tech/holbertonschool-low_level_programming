#include "holberton.h"
/**
*print_alphabet_x10 - entry point
*
*function name - putchar
*
*Description - Void = no value
*
*Return: 0 - Success
*
*/

void print_alphabet_x10(void)
{
char c = 'a';

int x = 1;

for (x = 1; x <= 10; x++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}

}
