#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int l;
	char k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	k = "Last digit of";

	if (l > 5)
	{
		printf("%s %d %s %d %s", k, n, "is", l, "and is greater than 5\n");
	}
	else if (l == 0)
	{
		printf("%s %d %s %d %s", k, n, "is", l, "and is 0\n");
	}
	else if (l < 6 && l != 0)
	{
		printf("%s %d %s %d %s", k, n, "is", l, "and is less than 6 and not 0\n");
	}
	return (0);
}
