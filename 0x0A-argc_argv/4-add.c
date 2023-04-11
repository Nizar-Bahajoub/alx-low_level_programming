#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: counter of inputs
 * @argv: pointer to inputs
 *
 * Return: 0 if true 1 if not
 */

int main(int argc, char *argv[])
{
	int i, s = 0, count = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Erreur\n");
				return (1);
			}
		}
		s += atoi(argv[count]);
		count++;
	}
	printf("%d\n", s);
	return (0);
}
