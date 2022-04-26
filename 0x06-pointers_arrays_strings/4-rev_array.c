#include"main.h"
/**
 * reverse_array - is a function that reverses an array of integers.
 * @a : pointer to array
 * @n : size of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int rev[n];

	while (j != n)
	{
		rev[j] = a[j];
		j++;
	}

	j = 0;

	for (int i = n - 1; i >= 0; i--, j++)
	{
		a[j] = rev[i];
	}
}
