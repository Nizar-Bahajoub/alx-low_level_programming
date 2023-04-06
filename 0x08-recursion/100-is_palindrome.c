#include "main.h"

/**
 * is_palindrome1 - check if a string is palindrome
 * @s:the string to be chechek
 * @a: the inverse of s
 *
 * Return: 1 if yes 0 if not
 */

int is_palindrome1(char *s, char *a)
{
	if (*a != '\0' && *s != '\n')
	{
		if (*a == *s)
		{
			is_palindrome1(s + 1, a + 1);
		}
		else
			return (0);
			
}

/**
 * is_palindrome - check if s is palindrome
 * @s: the string to be checked
 *
 * Return: 1 if yes 0 if not
 */

int is_palindrome(char *s)
{
	is_palindrome(s, _print_rev_recursion(s));
}
