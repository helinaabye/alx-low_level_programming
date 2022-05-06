#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - is a function that allocates memory using malloc
 * @b: is the number of bytesto be allocated
 * Return: pointer to the created memory space
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
