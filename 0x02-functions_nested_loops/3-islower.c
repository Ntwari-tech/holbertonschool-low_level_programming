#include "holberton.h"
/**
*_islower - entry point
*@c: is a charactor
*function name - _putchar
*
*Description - Void = no value
*
*Return: 0 - Success
*
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
