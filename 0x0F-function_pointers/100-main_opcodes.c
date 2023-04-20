#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * Description: a program
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int byte, num;
	int (*home)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error");
		exit(2);
	}

	for (num = 0; num < byte; num++)
	{
		code = *(unsigned char *)home;
		printf("%.2x", code);

		if (num == byte - 1)
			continue;
		printf(" ");
		home++;
	}
	printf("\n");
	return (0);
}
