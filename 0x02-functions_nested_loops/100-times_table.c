#include "main.h"

/**
 * print_times_table - print times table
 * @n: nombre of tables
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, p;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0 ; j <= n; j++)
			{
				p = i * j;
				if (p > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar((p - (p % 10)) / 10 + '0');
					_putchar((p % 10) + '0');
				}
				else if (p > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p / 100) + '0');
				}
				else if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
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
