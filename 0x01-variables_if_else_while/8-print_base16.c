#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: 0
 */

int main(void)
{
	int c, i = 48;

	for (c = 0; c < 10; c++)
	{
		putchar(i);
	}
	for (c = 97; c < 7; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
