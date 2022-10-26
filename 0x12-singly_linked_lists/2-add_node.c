#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer to a pointer of a node
 * @str: element in the nodes
 *
 * Return: the address of the node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_node;
	/*create a temporary node struct using malloc*/
	temp_node = malloc(sizeof(list_t));
	if (temp_node)
	{
		/*define the elements*/
		temp_node->str = strdup(str);
		temp_node->next = NULL;
		/*derefernce the node link*/
		temp_node->next = *head;
		/*assign head node temp_node's address*/
		*head = temp_node;
		temp_node->len = strlen(str);
	}
	else
		return (NULL);
	return (*head);
}
