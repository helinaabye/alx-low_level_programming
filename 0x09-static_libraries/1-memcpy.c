#include"main.h"
/**
 * _memcpy - is a function that copies memory area
 * @dest: is a pointer the memory area is copied from
 * @src: is a pointer from which the memory is copied
 * @n: is the number of bytes to be copied from src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
