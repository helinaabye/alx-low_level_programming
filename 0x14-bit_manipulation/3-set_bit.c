#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: is the number input
 * @index: index
 * Return: value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(n))
		return (-1);

	*n |= (index << 1);

	return (1);
}
