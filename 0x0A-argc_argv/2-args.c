#include<stdio.h>
/**
 * main - is a function that prints all the arguments
 * @argc: is the arguments
 * @argv: is the pointer to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
