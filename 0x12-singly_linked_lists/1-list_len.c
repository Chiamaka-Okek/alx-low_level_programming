#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len_of_data = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			len_of_data++;
		h = h->next;
	}
	return (len_of_data);
}
