#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit of n
 * @n: takes an integer
 * Return: 0
 */

int print_last_digit(int n)
{
	int i;
	char l[22];

	i = n % 10;
	if (n < 0)
	{
		i = i * -1;
	}
	l = i + '0';
	l = i + i;

	_putchar(l"\n");
	return (0);
}
