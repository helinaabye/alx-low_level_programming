#include "main.h"
#include <stdlib.h>
/**
 * _puts - is a function that prints a string, followed by a new line,
 * @str: input pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}

}
/**
 * _atoi - is a function that converts a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(const char *s)
{
	int l = 1;
	unsigned long int p = 0, n, i;

	for (n = 0; !(s[n] >= 48 && s[n] <= 57); n++)
	{
		if (s[n] == '-')
		{
			l *= -1;
		}
	}
	for (i = n; s[i] >= 48 && s[i] <= 57; i++)
	{
		p *= 10;
		p += (s[i] - 48);
	}

	return (l * p);
}
/**
 * print_int - is a function that prints an integer.
 * @n: int input
 * Return: 0
 */

void print_int(unsigned long int n)
{

	unsigned long int m = 1, i, p;

	for (i = 0; n / m > 9; i++, m *= 10)
		;

	for (; m >= 1; n %= m, m /= 10)
	{
		p = n / m;
		_putchar('0' + p);
	}

}
/**
 * main - is a function that prints multiplication
 * @argc: int input
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));

	_putchar('\n');
	return (0);
}
