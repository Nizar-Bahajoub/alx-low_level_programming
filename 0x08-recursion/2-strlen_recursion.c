#include "main.h"

/**
 * _strlen_recursion - return the lenght of  string
 * @s: the string
 * Retrun: the lenth of s
 */

int _strlen_recursion(char *s)
{
	int c = 0;
	if (*s != '\0')
	{
		c++;
		_strlen_recursion(s + 1);
	}
	return (c);
}
