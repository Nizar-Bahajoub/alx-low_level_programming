#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
