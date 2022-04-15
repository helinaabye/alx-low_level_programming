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
		_putchar('\\');
		_putchar('\n');

		for (j = 0; j < n; j++)
		{
			if (j < i)
			{
				_putchar(' ');
			}
		}
	}
}
