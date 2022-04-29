#include<stdio.h>
/**
 * main - is a function that prints the number of arguments
 * @argc: is the arguments
 * @argv: is the pointer to the arguments
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
