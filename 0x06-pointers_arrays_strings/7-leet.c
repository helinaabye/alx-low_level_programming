#include "main.h"

/**
 * leet - is a function that encodes a string
 * @s: is a pointer to char
 * Return: pointer to s
 */

char *leet(char *s)
{
	int i, j;
	char v[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; v[j] != '\0'; j++)
		{
			if (s[i] == v[j] || s[i] == (v[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
