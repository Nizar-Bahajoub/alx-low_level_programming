#include "main.h"

/**
 * print_last_digit - last digit of a number
 * @n: the number to treat
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int i = n;
	
	i = n % 10;
	if (i < 0)
	{
		i = -1 * i;
	}
	_putchar(i + '0');
	return (i % 10);
}
