#include "main.h"

/**
 * is_palindrome1 - check if a string is palindrome
 * @s:the string to be chechek
 * @lent: the lenght of s
 * @i: iterator
 *
 * Return: 1 if yes 0 if not
 */

int is_palindrome1(char *s, int i, int lent)
{
		if (*(s + i) != *(s + lent -1))
		{
			return (0);
		}
		if (i >= lent)
			return (1);
		return ((is_palindrome1(s, i + 1, lent - 1)));
}

/**
 * long_1 - long of s
 * @s
 *
 * Return: int
 */

int long_1(char *s)
{
	if (*s != '\0')
		return ((1 + long_1(s + 1)));
}

/**
 * is_palindrome - check if s is palindrome
 * @s: the string to be checked
 *
 * Return: 1 if yes 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (is_palindrome1(s, 0, long_1(s)));
}
