#include<studio.h>
/**
 * main - is a function that prints fizzbuzz 
 * Return: 0
 */
int main(void)
{
	int i;
	char f[3] = "Fizz";
	char b[3] = "Buzz";

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s%s", f, b);
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

		putchar(' ');
	}

	putchar('\n');
	return (0);
}
