#include "main.h"

/**
 * _strlen - is a function that returns the length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
