#include "holberton.h"

/**
 * cap_string- f() name
 * @s: pointer to string
 * Description: capitalizes all words of a string
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	int x;
	int letter = 'a' - 'A';
	char seperator[] = "\t\n;,!\"() {}.?";

		for (i = 0; s[i] != '\0'; i++)
		{
			for (x = 0; seperator[x] < s[i]; x++)
			{
				if (s[i] == seperator[i])
				{
					i++;
					s[i] -= letter;
					s[i] = seperator[i];
				}
			}
		}
		return (s);
}
