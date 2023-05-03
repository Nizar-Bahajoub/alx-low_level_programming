#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in linked list
 * @head: the head of the list
 *
 * Return:  The address of the node where the loop starts, or NULL
 * if ther is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *torto = head, *har = head;

	while (har != NULL && torto != NULL)
	{
		torto = torto->next;
		har = (har->next)->next;

		if (torto == har)
		{
			torto = head;
			while (torto != har)
			{
				torto = torto->next;
				har = har->next;
			}
			return (torto);
		}
	}
	return (NULL);
}
