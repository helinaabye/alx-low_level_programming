#include"main.h"
/**
 * _puts_recursion - is a function that prints a string, followed by a new line
 * @s: is the string input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
