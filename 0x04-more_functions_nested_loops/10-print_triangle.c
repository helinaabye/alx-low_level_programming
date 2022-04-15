#include"main.h"
/**
 * print_triangle - is a function that draws a diagonal in the terminal
 * @size: is the size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (j > i - 1)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
