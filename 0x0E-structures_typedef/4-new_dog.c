#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a dog with given parameters and passes pointer to dog
 * @name: 1st strng "name"
 * @age: fl "age"
 * @owner: 2 nd strng "owner"
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;
doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
{
return (NULL);
}
doggy->name = strdup(name);
if (doggy->name == NULL)
{
free(doggy);
return (NULL);
}
doggy->owner = strdup(owner);
if (doggy->owner == NULL)
{
free(doggy);
free(doggy->name);
return (NULL);
}
doggy->age = age;
return (doggy);
}
