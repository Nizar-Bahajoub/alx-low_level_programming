#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Retunr: void
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char c = s[0];

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		c = s[i];
		s[i] = s[len];
		s[len] = c;
	}
}
