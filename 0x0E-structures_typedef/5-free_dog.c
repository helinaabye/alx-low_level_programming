#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - is a function that frees memory of dog
 * @d: is a pointer to dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free((*d).name);
		if (d->owner)
			free((*d).owner);
		free(d);
	}
}
