#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int nu;

	nu = 0;
	while (nu <= 9)
	{
		printf("%d", nu);
		nu++;
	}
	putchar('\n');
	return (0);
}
