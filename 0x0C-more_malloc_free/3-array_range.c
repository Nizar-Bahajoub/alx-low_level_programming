#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum of the table
 * @max: the maximum of the table
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *t, len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	t = malloc(sizeof(int) * len);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		t[i] = min;
		min++;
	}
	return (t);
}
