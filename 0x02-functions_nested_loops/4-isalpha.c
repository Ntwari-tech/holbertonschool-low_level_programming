#include "holberton.h"
/**
*_isalpha - is the entry point
*
*@c: is a charactor
*
*Return: The sum of the two parameters
*
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
