#include <stdio.h>
#include <stdlib.h>


/**
 * binary_search - binary search for a value
 * @array: the array to look in
 * @size: the size of the array
 * @value: the values to look for
 *
 * Return: the index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, m, i;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		m = (left + right) / 2;
		if (array[m] < value)
		{
			left = m + 1;
		}
		else if (array[m] > value)
		{
			right = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
