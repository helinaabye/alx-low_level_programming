#include"main.h"
#include<stdio.h>
/**
 * main - is a function that prints the name of the program
 * @argc: is the arguments
 * @argv: is the pointer to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
