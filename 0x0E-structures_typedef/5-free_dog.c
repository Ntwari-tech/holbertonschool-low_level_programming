#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees the dog"freedom"
* @d: a way out for doggy
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
