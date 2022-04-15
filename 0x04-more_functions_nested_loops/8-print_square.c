#include"main.h"
/**
 * print_square - is a function that draws a square in the terminal
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
