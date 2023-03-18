#include <stdio.h>

/**
 * main - print number 2
 *
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 0; i <= 9; i++)
	{
		for (k = i; k <= 9; k++)
		{
			if (i != k)
			{
				putchar(i);
				putchar(k);
			}
		}
		if (k == 9)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
