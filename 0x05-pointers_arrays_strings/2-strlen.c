#include "main.h"

/**
 * _strlen - return the lenth of string
 * @s: the string to calcul the lenth of
 *
 * Return: lenth
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
