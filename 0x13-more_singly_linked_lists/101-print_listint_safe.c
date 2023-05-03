#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

#define SIZE 1024
/**
 * print_listint_safe - prints a list
 * @head: the headof the list
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int c = 0;
	unsigned long int i;
	const listint_t *p;
	const listint_t *t[SIZE];

	if (head)
	{
		p = head;
		while (p != NULL)
		{
			c++;
			i = (unsigned long int)p % SIZE;
			if (t[i] == p)
			{
				printf("-> [%p] %d\n", (void *)p, p->n);
				c--;
				break;
			}
			printf("[%p] %d\n", (void *)p, p->n);
			t[i] = p;
			p = p->next;
		}
		return (c);
	}
	exit(98);
}
