#include "dog.h"
#include <stdlib.h>

/**
* init_dog - intitialize variable of type struct dog
* @d: dog struct
* @name: doggy name
* @age: doggy age
* @owner: doggy owner
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}