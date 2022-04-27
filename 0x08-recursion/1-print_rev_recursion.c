#include"main.h"
/**
 * _print_rev_recursion - is a function that prints a string in reverse
 * @s: is the string input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
