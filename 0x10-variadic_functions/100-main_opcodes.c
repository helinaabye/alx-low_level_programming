#include <stdio.h>
#include <stdlib.h>
/**
 * main - is a function print opcodes of its own main function
 * @argc: the size of the args
 * @argv: the args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *mem = (char *) main;

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
