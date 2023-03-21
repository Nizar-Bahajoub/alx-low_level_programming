#include "main.h"

/**
 * _isalpha - cheks if a character is a letter Up or Low
 * @c: the character to be checked
 *
 * Return: 1 (true) 0 (otherwise)
 */

int _isalpha(int c)
{
	if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
