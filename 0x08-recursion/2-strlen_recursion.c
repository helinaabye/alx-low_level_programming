#include"main.h"
/**
 * _strlen_recursion - is a function that returns the length of a string
 * @s: is the string input
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
