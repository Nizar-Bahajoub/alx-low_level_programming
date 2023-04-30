#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - printd all the elements of a list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		c++;
	}
	return (c);
}
