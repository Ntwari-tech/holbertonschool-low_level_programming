#include "main.h"
#include <stdio.h>

/**
* main - is our function
* @argc:  contains the number of arg
* @argv: an array of strings
*
*Return: an integer
*/

int main(int argc, char **argv)
{
(void) **argv;
printf("%d\n", argc - 1);
return (0);
}
