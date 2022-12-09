#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the specified index
 *
 * @head: head node
 * @index: input index
 *
 * Return: pointer to node if found else it returns NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == head)
			break;
		head = head->next;
	}
	return (head);
}
