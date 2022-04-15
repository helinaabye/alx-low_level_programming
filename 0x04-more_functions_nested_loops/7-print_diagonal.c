#include"main.h"
/**
 * print_diagonal - is a function that draws a diagonal in the terminal
 * @n: is the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
