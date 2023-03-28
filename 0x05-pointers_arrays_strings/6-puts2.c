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
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = (len - 1) / 2; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
