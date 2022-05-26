#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - is a function that converts binary to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if other string or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] > '1' || b[i] < '0')
			return (0);
		num = 2 * num + (b[i] - '0');
		i++;
	}

	return (num);
}
