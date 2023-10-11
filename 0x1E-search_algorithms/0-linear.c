#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - linear search inside an array
 * @array: the array to search inside
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index or -1 if it failled
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
			if (*(array + i) == value)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
