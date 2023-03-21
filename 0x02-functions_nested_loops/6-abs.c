#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the number to be calculated
 *
 * Return: the absolute value
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (-1 * c);
}
