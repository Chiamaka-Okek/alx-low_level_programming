#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of the list
 *
 * @head: pointer to first node
 * @str: string data for each node
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr = NULL;

	/*create a temporary node struct using malloc*/
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	/*define new_node parameters*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);
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
