#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to print the chars from
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		_putchar(str[i]);
		if (i < len)
			i += 2;
	}

	_putchar('\n');
}
