#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of the list
 *
 * @head: head of the node
 * @n: input data
 *
 * Return: list of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = (*head);
		new_node->prev = NULL;
		if (*head != NULL)
			*head = new_node;
	}
	else
		return (NULL);
	return (*head);
}
