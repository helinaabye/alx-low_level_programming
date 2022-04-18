#include "main.h"

/**
 * rev_string - is a function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char *m = s;
	char n[1000];
	int i = 0;

	while (*s != '\0')
	{
		n[i] = *s;
		s++;
		i++;
	}

	i = 0;

	while (s > m)
	{
		s--;
		*s = n[i];
		i++;
	}
}
