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
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((x << i) & n)
		{
			_putchar('1');
			c = 1;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
