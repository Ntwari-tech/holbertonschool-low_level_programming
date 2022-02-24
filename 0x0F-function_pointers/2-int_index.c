#include "function_pointers.h"

/**
* int_index - srch for an int in [] of ints
* @array: [] of int
* @size: the length []
* @cmp: *P
* Return: If no element matches, return -1
*	If size <= 0, return -1
*	 index of the first element for which the cmp
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
