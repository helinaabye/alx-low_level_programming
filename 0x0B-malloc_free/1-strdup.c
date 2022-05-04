#include"main.h"
#include <stdlib.h>
/**
 * _strdup - is a function that allocates a pointer to a new space in memory
 * @str: is the string input
 * Return: a pointer that contains a copy of a string
 */
char *_strdup(char *str)
{
	char *arr;
	int size, i;

	if (str == NULL)
		return (NULL);

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
