#include"main.h"
/**
 * _strspn - is a function that gets the length of a prefix substring
 * @s: is the string input
 * @accept: is a second string input
 * Return: the number of bytes of s which consists of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0, j;

	while (accept[i] != '\0')
	{
		j = 0;

		while (s[j] != '\0' && s[j] != 32)
		{
			if (accept[i] == s[j])
				count++;
			j++;
		}

		i++;
	}

	return (count);
}
