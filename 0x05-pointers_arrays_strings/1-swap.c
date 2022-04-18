#include"main.h"
/**
 * swap_int - is a function that exchanges the values of a and b.
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int j = *b;

	*b = *a;
	*a = j;
}
