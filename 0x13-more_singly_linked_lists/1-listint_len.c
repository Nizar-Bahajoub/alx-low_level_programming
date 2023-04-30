#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - printd all the elements of a list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int c = 0;

	if (h == 0)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
