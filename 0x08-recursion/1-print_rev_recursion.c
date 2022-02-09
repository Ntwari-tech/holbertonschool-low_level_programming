#include "main.h"
/**
  * _print_rev_recursion - prnt a stng reversely
  * @s: pointer to start of string
  *
  * Return: void
  */

void _print_rev_recursion(char *s)
{
if (*s != 0)
{
s++;
_print_rev_recursion(s--);
}
_putchar(*s);
}
