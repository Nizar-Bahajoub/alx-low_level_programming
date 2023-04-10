#include "main.h"

/**
 * *_memset - fill the first n bytes of the area pointed to by s with b
 * @s: era of to be modified
 * @b: the constant to fill s with
 * @n: number of byte to be fill
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
