#include "main.h"

/**
 * print_number - print integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	char s;
	int i = 1, j = 0, k;

	k = n;
	if (n < 0)
	{
		_putchr('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((k % 10) + '0');
}
