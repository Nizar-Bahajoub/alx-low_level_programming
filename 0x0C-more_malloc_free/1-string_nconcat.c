#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: input
 * @s2: input
 * @n: the first n bytes of s2
 *
 * Return: pointer to a new space of memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *new;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		len1 = 0;
	else
		while (s1[len1] != '\0')
		len1++;
	if (s2 == NULL)
		len2 = 0;
	else
		while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;
	new = malloc(sizeof(char) * (len1 + n + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		new[len1] = s2[i];
		len1++;
	}
	new[len1] = '\0';

	return (new);
}
