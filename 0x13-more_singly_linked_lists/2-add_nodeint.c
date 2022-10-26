#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds new node at the beginning of a list
 *
 * @head:pointer to first node
 * @n: integer
 *
 * Return: the address of the new element or NULL if it fsiled *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_node;
	/*create a temporary node struct using malloc*/
	temp_node = malloc(sizeof(listint_t));
	if (temp_node)
	{
		/*define the elements*/
		temp_node->n = n;
		temp_node->next = NULL;
		/*derefernce the node link*/
		temp_node->next = *head;
		/*assign head node temp_node's address*/
		*head = temp_node;
	}
	else
		return (NULL);
	return (*head);
}
