#include "main.h"
#include <stdio.h>
/**
 * print_binary - is a function that prints the binary version of a number
 * @n: is the number input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0, j = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			printf("1");
			j++;
		}
		else if (j)
			printf("0");
	}

	if (!j)
		printf("0");
}
