#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array to reverse
 * @n: size of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, c;

	for (; i < n ; i++)
	{
		c = a[i];
		a[i] = a[n - i];
		a[n - i] = c;
		n--;
	}
}
