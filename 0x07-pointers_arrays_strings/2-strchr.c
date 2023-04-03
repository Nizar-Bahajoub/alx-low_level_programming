#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to search for
 *
 * Return: pointer to c if it's found or null if not
 */

char *_strchr(char *s, char c)
{
	int i = 0, j = -1;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = i;
			break;
		}
		i++;
	}
	if (j == -1)
	{
		return NULL;
	}
	else
		return (s + j);
}
