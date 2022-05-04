#include"main.h"
#include <stdlib.h>
/**
 * _strdup - is a function that allocates a pointer to a new space in memory
 * @str: is the string input
 * Return: a pointer that contains a copy of a string
 */
char *_strdup(char *str)
{
	char *str2;
	int size, i;

	if (str == NULL)
		return (NULL);

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	str2 = (char *) malloc(sizeof(char) * size);

	if (str2 == 0)
		return (0);

	for (i = 0; i <= size; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
