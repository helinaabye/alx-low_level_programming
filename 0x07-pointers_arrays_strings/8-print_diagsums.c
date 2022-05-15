#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - is a function that prints the sum of the two diagonals
 * @a: is the pointer input
 * @size: is the size input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int s1 = 0, s2 = 0, i;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", s1);
	printf("%d\n", s2);
}
