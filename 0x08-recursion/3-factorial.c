#include"main.h"
/**
 * factorial - is a function that returns the factorial of a given number
 * @n: is the input number
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
