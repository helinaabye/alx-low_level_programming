#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - is a function that prints numbers
 * @n: is the int input
 * @separator: separator input
 * Return: numbers entered as args to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
		va_end(args);
		printf("\n");
}
