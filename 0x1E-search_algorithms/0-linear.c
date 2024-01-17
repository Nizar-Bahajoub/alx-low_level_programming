#include <stdio.h>
#include <stdlib.h>


/**
 * linear_search - find the element in an array
 * @array: the array to look for
 * @size: the size of the array
 * @value: the value to look for
 *
 * Return: index or -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
