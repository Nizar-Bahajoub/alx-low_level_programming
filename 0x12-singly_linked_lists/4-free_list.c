#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: head of the list
 *
 * Return: nothng
 */

void free_list(list_t *head)
{
	list_t *p = head;
	if (head == NULL)
		return;
	while (p != NULL)
	{
		list_t *next = p->next;
		free(p->str);
		free(p);
		p = next;
	}
}
