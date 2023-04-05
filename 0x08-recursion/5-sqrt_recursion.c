#include "main.h"

/**
 * My_sqrt -  returns the natural square root of a number
 * @a: the number to be squared
 * @b: indice
 *
 * Return: the n squared
 */

int My_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	else
		return (My_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a numbrer
 * @n: the input
 *
 * Return: sqrt(n)
 */

int _sqrt_recursion(int n)
{
	return (My_sqrt(n, 0));
}
