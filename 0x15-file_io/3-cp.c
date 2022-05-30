#include "main.h"
/**
  * main - is a function that copies one file to another
  * @argc: number of argument
  * @argv: array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int file, copy, size;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file =  open(argv[1], O_RDONLY, 0);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	copy = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((size = read(file, buf, 1024)) > 0)
	{
		if (write(copy, buf, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file) != 0 || close(copy) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", -1), exit(100);
	}
	return (0);
}
