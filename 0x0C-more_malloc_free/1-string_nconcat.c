#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* string_nconcat - concatenates two strings
* @s1: 1st Strng
* @s2: 2nd Strng
* @n: variable
* Return: a *p to a string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, x, l = 0;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;

	     l = i + n;

	cat = malloc((sizeof(char) * l) + 1);
	if (cat == NULL)
		return (NULL);

	x = 0;

	for (i = 0; s1[i]; i++)

		cat[x++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		cat[x++] = s2[i];
cat[x] = '\0';

return (cat);

}
