#include"main.h"
#include <stdlib.h>
/**
 * create_array - is a function that creates an array of chars
 * @size: is the size to be allocated
 * @c: is the char which will determine the size
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0) 
		return (0);

	arr = (char *) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
