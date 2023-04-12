#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str: input
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int c = 0, i;

	i = 0;
	while (str[i] != '\0')
	{
		c++;
		i++;
	}
	s = malloc(sizeof(char) * c);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
