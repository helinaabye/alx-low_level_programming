#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - is a function that prints anything
 * @format: list of all arguments passed to the function 
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *p, *separator;

	va_start(args, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				p = va_arg(args, char *);
				if (p == NULL)
					p = "(nil)";
				printf("%s%s", separator, p);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
