#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: he size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t, *old;
	unsigned int i;

	old = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	t = malloc(new_size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		t[i] = old[i];
	}
	free(ptr);
	return (t);
}
