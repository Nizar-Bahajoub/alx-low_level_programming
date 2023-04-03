#include "main.h"

/**
 * *_memset - fill the first n bytes of the area pointed to by s with b
 * @*s: erao to be modified
 * @b: the constant to fill s with
 * @n: number of byte to be fill
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
