#include "main.h"
/**
 * get_bit - finds value of a bit at a given index
 * @n: is the number input
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);

	if (index > 32)
		return (-1);

	return (b & 1);
}
