#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: tableof arguments
 *
 * Return: 
 */

int main(int argc, char **argv)
{
	int f1, f2, num_re, num_wr;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_t\n", 22);
		exit(97);
	}
	
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	num_re = read(f1, buf, BUFFER_SIZE);
	while (num_re > 0)
	{
		num_wr = write(f2, buf, num_re);
		if (num_re != num_wr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f1);
			close(f2);
			exit(99);
		}
	}

	if (num_re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(f1);
		close(f2);
		exit(98);
	}

	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}

	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}

	return (0);

}
