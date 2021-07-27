#include "holberton.h"
/**
 * _strchr - Prototype function
 * Description: Locate a character in a string
 * @c: Our char
 * @s: string
 * Return: char/Null
 */
char *_strchr(char *s, char c)
{
	int h;

	while (s[h])
	{
		if (s[h] == c)
			return (s + h);
		h++;
	}

	if (c == '\0')
	{
		return (s + h);
	}

	return (0);
}
