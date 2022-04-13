#include "main.h"
#include "stdio.h"

/**
 * print_last_digit - print last digit of n
 * @n: takes an integer
 * Return: 0
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	_putchar(i + '0');
	return (0);
}
