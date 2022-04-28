#include"main.h"
/**
 * _sqrt - is a function that checks if the number has natural square root
 * @n: is the number to be checked
 * @r: is n - 1 until n = 0
 * Return: the root or 0 or -1
 */
int _sqrt(int n, int r)
{
	if (n < 0)
		return (-1);
	else if ((r * r) > n)
		return (-1);
	else if ((r * r) == n)
		return (r);
	return (_sqrt(n, r + 1));
}
/**
 * _sqrt_recursion - is a function that returns the natural square root
 * @n: is the input number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
