#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representaion of a number
 * @n: the number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	if (n == 0)
		_putchar('0');
	else
	{
	while (x <= n)
	{
		x <<= 1;
	}
	x >>= 1;
	while (x)
	{
		if (x & n)
			_putchar('1');
		else
			_putchar('0');
		x >>= 1;
	}
	}
}
