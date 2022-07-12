#include"main.h"
/**
 * _strpbrk - is a function locates the first occurrence in the string s
 * @s: is a pointer to string
 * @accept: is a pointer to second string
 * Return: a pointer to the byte in s or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}

			j++;
		}

		i++;
	}

	return (0);
}
