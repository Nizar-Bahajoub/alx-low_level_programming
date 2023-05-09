#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: file name
 * @letters: the number of letters it should print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb;
	ssize_t len, c;
	char *a;

	if (filename == NULL)
		return (0);

	fb = open(filename, O_RDONLY);
	if (fb == -1)
		return (0);

	a = malloc(sizeof(char) * letters);
	if (!a)
	{
		close(fb);
		return (0);
	}

	len = read(fb, a, letters);
	if (len == -1)
	{
		close(fb);
		free(a);
		return (0);
	}

	c = write(STDOUT_FILENO, a, len);
	if (c == -1)
	{
		close(fb);
		free(a);
		return (0);
	}

	close(fb);
	free(a);
	return (c);
}
