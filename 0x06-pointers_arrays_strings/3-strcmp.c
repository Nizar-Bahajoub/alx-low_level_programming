#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 or 1 or -1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, l1 = 0, l2 = 0, corr = 0;

	while (s1[i] != '\0')
	{
		l1++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		l2++;
	}
	if (l1 < l2)
		corr--;
	else if (l1 > l2)
		corr++;
	else
	{
		corr = 0;
		for (i = 0; i < l1; i++)
		{
			if (s1[i] == s2[i])
				corr++;
		}
	}
	if (corr == l1)
		return (0);
	else if (corr > 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
