#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in `array`.
 * @value: The value to search for
 * Return: The index where `value` is located.
 * Description: Searches for a value in a sorted array of integers using
 *				the Binary search algorithm
 **/
int binary_search(int *array, size_t size, int value)
{
	int mid, min, max;

	min = 0;
	max = size;
	while (array && (max - min > 0))
	{
		printf("Searching in array: ");
		print_array(array, min, max);
		mid = (int)((max + min - 1) / 2);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			min = mid + 1;
		else
			max = mid;
	}
	return (-1);
}

/**
 * print_array - print a sequence of an array.
 * @array: A pointer to the first element of the array to print.
 * @min: The starting index.
 * @max: The ending index.
 **/
void print_array(int *array, int min, int max)
{
	int i;

	for (i = min; i < max; i++)
	{
		printf("%d", array[i]);
		if (i < max - 1)
			printf(", ");
	}
	printf("\n");
}
