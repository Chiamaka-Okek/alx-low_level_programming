#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
