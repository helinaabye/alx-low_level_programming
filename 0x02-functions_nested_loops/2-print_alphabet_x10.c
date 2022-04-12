#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase ten times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
