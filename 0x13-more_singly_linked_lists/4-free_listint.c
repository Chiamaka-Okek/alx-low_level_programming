#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: pointer to the first node
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

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
