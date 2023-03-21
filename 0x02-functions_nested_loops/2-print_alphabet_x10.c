#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 *
 * written by nizar
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char c = 97;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
