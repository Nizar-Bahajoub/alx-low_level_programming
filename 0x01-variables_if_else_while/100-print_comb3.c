#include <stdio.h>

/**
 * main - print number 2
 *
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 48; i <= 48 + 9; i++)
	{
		for (k = i; k <= 48 + 9; k++)
		{
			if (i != k)
			{
				putchar(i);
				putchar(k);
				if (k == (48 + 9)) && i == (48+8))
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
