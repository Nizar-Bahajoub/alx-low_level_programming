#include "main.h"

/**
 * times_table - print times table
 *
 * Return: void
 */

void times_table(int n)
{
	int i, j, p, first, last, a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0 ; j <= n; j++)
			{
				p = i * j;
				if (p > 9)
				{
					last = p % 10;
					first = (p - last) / 10;
					_putchar(',');
					_putchar(' ');
					_putchar(first + '0');
					_putchar(last + '0');
				}
				else if (p > 99)
				{
					c = p % 10;
					b = (p - c) % 100;
					a = (p - c - b) / 100;
					_putchar(',');
					_putchar(' ');
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(c + '0');
				}
				else if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else
					_putchar(p + '0');
			}
			_putchar('\n');
		}
	}
}	
