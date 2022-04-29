#include"main.h"
/**
 * _memset - is a function that fills memory with a constant byte
 * @s: is pointer to memeory area
 * @b: is constant byte
 * @n: is number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
