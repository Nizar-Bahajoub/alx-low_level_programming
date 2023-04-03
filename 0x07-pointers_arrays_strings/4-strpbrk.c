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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (s + i);
}
