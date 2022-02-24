#include "function_pointers.h"

/**
* array_iterator - executes fn gvn as prmter
* @array: []
* @size: length []
* @action: *p
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int index = 0;

	if (action != NULL && array != NULL)
	{
		for (; index < size; index++)
			action(array[index]);
	}
}
