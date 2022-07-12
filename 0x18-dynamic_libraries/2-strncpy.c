#include"main.h"
/**
 * _strncpy - is a function that copies a string
 * @dest : pointer to first input
 * @src : pointer to second input
 * @n : number input
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
