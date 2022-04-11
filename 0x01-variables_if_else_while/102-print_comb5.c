#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int b;
	int c;
	
	while (c <= 98)
	{
		b = (c + 1);
		while (b <= 99)
		{	
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));
				

			if (b + c != 98 + 99)
				{
					putchar(',');
					putchar(' ');
				}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
