#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to search for
 *
 * Return: pointer to c if it's found or null if not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
