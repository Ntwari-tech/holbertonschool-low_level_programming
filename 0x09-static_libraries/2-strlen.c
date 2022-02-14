#include "holberton.h"
/**
 * _strlen - F() name
 *
 * Description: f() to retuen the length of a string
 *
 * @s: pointer
 *
 * Return:an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
