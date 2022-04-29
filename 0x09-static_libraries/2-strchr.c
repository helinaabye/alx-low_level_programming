#include"main.h"
#include<stddef.h>
/**
 * _strchr - is a function that locates a character in a string
 * @s: is a given string
 * @c: is a char in string s
 * Return: a pointer to the occurrence of the character c otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (0);
}
