#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string  to change
 * @src: string source
 * @n: number of character toadd to dest
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
