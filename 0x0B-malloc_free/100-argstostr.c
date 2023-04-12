#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: input
 * @av: input
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, c = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
	}
	c += ac;
	s = malloc(sizeof(char) * c + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
			s[k++] = '\n';
	}
	return (s);

}
