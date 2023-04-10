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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
