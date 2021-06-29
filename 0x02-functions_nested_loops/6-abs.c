#include "holberton.h"
/**
*_abs - is the entry point
*
*@x: is an interger
*
*Return: The sum of the two parameters
*
*/
int _abs(int x)
{
if (x >= 0)
{
return (x);
}
else
{
return  (x * -1);
}
}
