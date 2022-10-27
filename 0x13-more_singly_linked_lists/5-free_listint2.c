#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 *
 * @head: pointer to first node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;
	/*traverse the list and free one node at a time*/
	else
	{
		while (*head != NULL)
		{
			ptr = *head;
			*head = *head;
			free(ptr);
			*head = NULL;
		}
	}
}
