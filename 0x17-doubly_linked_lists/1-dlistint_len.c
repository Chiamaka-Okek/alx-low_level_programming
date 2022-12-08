#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the number of elements in a list
 *
 * @h: head node
 *
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_of_data = 0;

	while (h)
	{
		len_of_data++;
		h = h->next;
	}
	return (len_of_data);
}
