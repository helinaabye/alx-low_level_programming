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
	int j = 0;

	if (n > 5)
	{
		while (src[j] != '\0' && j < n)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}

	else
	{
		while (dest[i] != '\0')
		{
			while (src[j] != '\0' && j < n)
			{
				dest[i] = src[j];
				j++;
				i++;
			}

			dest[i] = dest[i];
			i++;
		}
	}

	dest[i] = '\0';

	return (dest);
}
