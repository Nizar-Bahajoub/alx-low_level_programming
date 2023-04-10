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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
	}
	return (1);
}
