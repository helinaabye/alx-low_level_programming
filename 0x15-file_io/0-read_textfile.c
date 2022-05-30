#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile - is a function that reads and prints a text file
 * @filename: is the name of the file to be read
 * @letters: is the number of letters it has printed
 * Return: the number of letters prnted or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, j;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);

	j = write(STDOUT_FILENO, buf, i);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);

	return (j);
}
