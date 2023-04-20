#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - 
 * @argc: input
 * @argv: input
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' || *argv[2] == '/' || *argv[2] == '%')
	{
		c = (*get_op_func(argv[2]))((atoi(argv[1])), (atoi(argv[3])));
		printf("%d\n", c);
	}



	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
