#include "main.h"
#include <stdio.h>

/** print_to_98 - print numbers
 * @n: starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
				printf(", %d", i);
			else
				printf("%d", n);
		}
		_putchar('\n');
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
				printf(", %d", i);
			else
				printf("%d", n);
		}
		_putchar('\n');
	}
}
