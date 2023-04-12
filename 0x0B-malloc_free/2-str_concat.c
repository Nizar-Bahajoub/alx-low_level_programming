#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatinates twostings
 * @s1: input
 * @s2: input
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
