#include "main.h"

/**
 * string_toupper - is a function that changes lower to upper char
 * @s: input that is a pointer to char params
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
