#include "main.h"

/**
 * *_memcpy - copies n bytes from src to dest
 * @dest: the area to be changed
 * @src: the source
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
