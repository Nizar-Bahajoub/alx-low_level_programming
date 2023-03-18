#include <stdio.h>

/**
 * main - print number 2
 *
 * Return: 0
 */

int main(void)
{
	int i = 48, c;

	for (c = 0; c < 10; c++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
