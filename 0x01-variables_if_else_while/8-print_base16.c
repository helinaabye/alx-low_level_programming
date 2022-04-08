#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int nu = 0;
	char ch = 'a';

	while (nu <= 9)
	{
		putchar(nu + '0');
		nu++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
