#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *str_concat - concatinate two strings
* @s1: string(1)
* @s2: string(2)
*
*Return: NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;


	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
