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
int counter;
	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);

	return (0);

}
