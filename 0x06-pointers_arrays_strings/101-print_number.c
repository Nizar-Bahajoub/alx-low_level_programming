#include "main.h"

/**
 * print_number - print integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int k;

	k = n;
	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	if (k / 10 != 0)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + '0');
}
