#include <stdio.h>

/**
 * main - main function
 * @argc: counter of inputs
 * @argv: pointer to inputs
 *
 * Return: 0 if true 1 if not
 */

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	return (1);
}
