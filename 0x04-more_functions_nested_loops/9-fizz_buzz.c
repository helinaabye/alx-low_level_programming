#include"studio.h"
/**
 * fizzbuzz - is a function that prints fizzbuzz
 * 
 * Return: void
 */
void fizzbuzz(void)
{
	int i;
	char f[3] = "fizz";
	char b[3] = "buzz";
	char fb[7] = "fizzbuzz";

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", fb);
		}
		else if (i % 3 == 0)
		{
			printf("%s", f);
		}
		else if (i % 5 == 0)
		{
			printf("%s", b);
		}
		else
		{
			printf("%d", i);
		}
		putchar("%s", ' ');
	}
	putchar("%s", '\n');
}
