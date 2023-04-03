#include "main.h"

/**
 * _strpbrk - gets the length of a prefix substring
 * @s: the main string
 * @accept: the comparative string
 *
 * Return: pointer to the first char matches the one in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
