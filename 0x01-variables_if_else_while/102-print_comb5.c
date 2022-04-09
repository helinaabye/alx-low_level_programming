#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int b;
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = e;
			while (c < 10)
			{
				b = (d + 1);
				while (b < 10)
				{
					if ((e + d) < (c + b))
					{
						putchar('0' + e);
						putchar('0' + d);
						putchar(' ');
						putchar('0' + c);
						putchar('0' + b);

						if (e + d + b + c != 9 + 8 + 9 + 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
					b++;
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
