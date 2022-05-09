#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - is a function that creates a new dog
 * @name: is a pointer to name
 * @age: is a pointer to age
 * @owner: is a pointer owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, m;
	dog_t *dogo;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
	{
		free(dogo);
		return (NULL);
	}
	dogo->name = malloc(i * sizeof(dogo->name));
	if (dogo->name == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	for (m = 0; m <= i; m++)
		doge->name[m] = name[m];
	dogo->age = age;
	dogo->owner = malloc(j * sizeof(dogo->owner));
	if (dogo->owner == NULL)
	{
		free(dogo->owner);
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	for (m = 0; m <= j; m++)
		dogo->owner[k] = owner[k];
	return (dogo);
}
