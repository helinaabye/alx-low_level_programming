#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: takes in a character
 * Return: 1 for a letter and 0 for other wise
 */

int _isalpha(int c)
{
	int lowerCaseSwitch = 0;
	int upperCaseSwitch = 0;
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			lowerCaseSwitch = 1;
			break;
		}
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			upperCaseSwitch = 1;
			break;
		}
	}

	if (lowerCaseSwitch == 0 && upperCaseSwitch == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
