#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: number of bits to be flipped
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *)&n;
       	return (*p == 1);
}
