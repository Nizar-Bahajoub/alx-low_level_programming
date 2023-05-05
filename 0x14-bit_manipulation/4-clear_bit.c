#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 *
 * Return: 1 if correct  or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long  int  x = 1;

	if (index > 63)
		return (-1);
	*n = (~(x << index) & *n);
	return (1);
}
