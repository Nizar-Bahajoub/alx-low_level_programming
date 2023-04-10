#include "main.h"

/**
 * _islower - cheks for lowercase character
 * @c: the character to be checked
 *
 * written by nizar
 * Return: 1 if c is lower  otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
