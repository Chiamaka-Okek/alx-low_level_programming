#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to first node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;
	/*traverse the list and free one node at a time*/
	else
	{
		while (head != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}
