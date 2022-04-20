#include"main.h"
/**
 * _strcat - is a function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * then adds a terminating null byte
 * @dest: first string input
 * @src: second string input
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')

	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
