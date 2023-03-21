#include "main.h"

/**
 * times_table - print times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, p, first, last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0 ;j < 10; j++)
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
			else if (p != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}
