#include <stdio.h>

/**
 * main - Printing the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int c = 97;
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(c);
		c += i;
	}
	return (0);
}
