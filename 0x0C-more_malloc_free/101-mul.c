#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - if anumber is digit
 * @str: input
 *
 * Return: int
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * str_to_int - string to int
 * @str: input
 *
 * Return: int
 */
int str_to_int(char *str)
{
	int n = 0;
	int i = 0;

	while (str[i])
	{
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return (n);
}

/**
 * error - print Error
 *
 * Return: void
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - the main function
 * @argc: input
 * @argv: input
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
		error();
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
		error();

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);

	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);

}
