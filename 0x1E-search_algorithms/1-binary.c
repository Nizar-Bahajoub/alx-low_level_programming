#include <stdio.h>
#include <stdlib.h>


/**
 * print_array - prints the array where the search is
 * @array: the current array
 * @min: the first index
 * @max: the max index
 * Return: nothing
 */


void print_array(int *array, size_t min, size_t max)
{
	size_t i;

	printf("Searching in array:");
	for (i = min; i <= max; i++)
	{
		if (i == max)
			printf(" %d\n", array[i]);
		else
			printf(" %d,", array[i]);
	}
}


/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: the array te search inside
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index or -1 if it failed
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array != NULL)
	{
		l = 0;
		r = size - 1;
		while (l <= r)
		{
			print_array(array, l, r);
			m = (l + r) / 2;
			if (value > array[m])
			{
				l = m + 1;
			}
			else
				if (value < array[m])
				{
					r = m - 1;
				}
				else
					return (m);
		}
		return (-1);
	}
	return (-1);
}
