#include <stdlib.h>
#include "main.h"

/**
* array_range - creates [] of an int
* @min: x of  array
* @max: y of array
* Return: NULL if min > max/malloc fails
*/

int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
		return (NULL);

	array = (int *)malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
