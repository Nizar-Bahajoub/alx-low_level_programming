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
		i++;
	}
	c=97;
	for (i = 0; i < 6; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
