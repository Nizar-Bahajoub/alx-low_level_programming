#include "main.h"
/**
 * prime - is a a prime number
 * @a: input
 * @b: input
 *
 * Return: 0
 */

int prime(int a, int b)
{
	if (a <= 2)
		return (1);
	if (a % b == 0)
	{
		return (0);
	}
	if (b == (n + 1) / 2)
		return (1);
	return prime(a, b + 1);

}


/**
 * is_prime_number - if n is prime
 * @n: the number to be checked
 *
 * Return: 1 if n is prime
 */

int is_prime_number(int n)
{
	return prime(n, 2);
}
