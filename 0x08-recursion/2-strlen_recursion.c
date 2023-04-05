#include "main.h"

/**
 * _strlen_recursion - return the lenght of  string
 * @s: the string
 *
 * Retrun: c the lenght of s
 */

int _strlen_recursion(char *s)
{
	int c = 1;

	if (*s != '\0')
	{
		return (c + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
