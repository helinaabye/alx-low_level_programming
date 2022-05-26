#include "main.h"
#include <stdio.h>
/**
 * flip_bits - is a function that counts the number of bits to change
 * @n: is the first number input
 * @m: is the second number input
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int num;

	num = n ^ m;

	while (num)
	{
		i++;
		num &= (num - 1);
	}

	return (i);
}
