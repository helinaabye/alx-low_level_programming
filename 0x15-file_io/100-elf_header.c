#include "main.h"
/**
 * main - is a function that prints opcodes of this function
 * @argc: the number of arguments
 * @argv: the arrat of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *mem;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i--)
		printf("%02x%c", *mem++ & 0xff, i ? ' ' : '\n');

	return (0);
}
