#include <stdio.h>

/**
 * main - print number 2
 *
 * Return: 0
 */

int main(void)
{
	int i, k, l;

	for (i = 48; i <= 48 + 9; i++)
	{
		for (k = i; k <= 48 + 9; k++)
		{
			for (l = k; l <= 48 + 9; l++)
			{
				if (i != k && k != l && i != l)
				{
					putchar(i);
					patchar(k);
					putachr(l);
					if (l == (48 + 9) && k == (48 + 8) && i == (48 +7))
						break;
				}
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
