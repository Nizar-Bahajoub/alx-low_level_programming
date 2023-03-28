#include "main.h"

/**
 * puts_half - print half of a string
 * @str:string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0, n;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	n = len / 2;
	if ((len % 2) == 1)
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
