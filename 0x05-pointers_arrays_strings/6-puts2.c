#include "main.h"

/**
 * puts2 - print half of a string
 * @str:string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
