#include "main.h"
#include <stdlib.h>
/**
 * _realloc - is a function that reallocates a memory block using malloc
 * @ptr: pointer input
 * @old_size: old size input
 * @new_size: new size input
 * Return: pointer to new address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n, *p;
	unsigned int i;

	if (ptr != NULL)
		n = ptr;
	else
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(p + i) = n[i];
	}
	free(ptr);

	return (p);
}
