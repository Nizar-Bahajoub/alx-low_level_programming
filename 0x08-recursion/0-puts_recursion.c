#include "main.h"

/**
 * _puts_recursion - prints a string rucursivly
 * @s: the string to be put
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
