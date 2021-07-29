#include "holberton.h"

/**
 * _strcmp- f()name
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int b = 0;

	for (; s1[b] != '\0' || s2[b] != '\0'; b++)


		if (s1[b] != s2[b])
	{
		return (s1[b] - s2[b]);
	}
	return (0);
}
