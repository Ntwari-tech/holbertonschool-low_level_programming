#include "holberton.h"

/**
 * leet- f() name
 * @str: pointer to string
 *
 * Return: str
 */

char *leet(char *str)
{
	char *characters;
	char *numbers;
	int x;
	int y;

	characters = "aAeEoOtTlL";
	numbers = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; characters[y] != '\0'; y++)
		{
			if (str[x] == characters[y])
				str[x] = numbers[y];
		}
	}
	return (str);
}
