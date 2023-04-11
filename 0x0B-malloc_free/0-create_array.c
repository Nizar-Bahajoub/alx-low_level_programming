#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: size of the array
 * @c: char to be initialized with
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
}
