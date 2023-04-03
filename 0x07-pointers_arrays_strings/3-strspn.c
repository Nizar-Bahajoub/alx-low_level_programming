#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial string
 * @accept: the string to compare with
 *
 * Return: c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
