#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: takes in a number
 * Return: returns a positive integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
