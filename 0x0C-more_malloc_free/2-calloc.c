#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elemtns
 *
 * Return:  pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = malloc(size * nmemb);
	if (t == NULL)
		return (NULL);

	memset(t, 0, size * nmemb);
	return (t);
}
