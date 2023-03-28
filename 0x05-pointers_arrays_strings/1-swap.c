#include "main.h"

/**
 * swap_int - switch value of two integers
 * @a: int a 
 * @b: int b to switch with a 
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
