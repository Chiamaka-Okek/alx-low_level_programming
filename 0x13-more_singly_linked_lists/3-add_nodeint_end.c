#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of the list
 *
 * @head: pointer to first node
 * @n:integer data for each node
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = NULL;

	/*create a temporary node struct using malloc*/
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	/*define new_node parameters*/
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
	/*set ptr to equal to head hence ptr points to firtst node*/
		ptr = *head;
		/*traverse list to get to the node conataining NULL*/
		while (ptr->next != NULL)
			ptr = ptr->next;
		/*once last node is reached update it with the new_node*/
		ptr->next = new_node;
	}
	return (*head);
}
