#include "main.h"
/**
 * is_prime_number - is a function that checks if a number is prime number
 * checkPrime - is a function that returns back the check for prime number
 * @n: takes in an integer number
 * @p: takes in an integer number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int checkPrime(int n, int p);

int is_prime_number(int n)
{
	return (checkPrime(n, 2));
}
/**
 * checkPrime - checks if a number is prime number
 * @n: takes in an integer number
 * @p: takes in an integer number
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int checkPrime(int n, int p)
{
	if (n <= 1)
		return (0);
	else if (p < n && n % p == 0)
		return (0);
	else if (p < n && n % p != 0)
		return (checkPrime(n, p + 1));
	else
		return (1);
}
