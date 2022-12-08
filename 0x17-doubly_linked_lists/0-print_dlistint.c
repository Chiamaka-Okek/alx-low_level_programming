#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 *
 * @h: head node
 *
 * Return: the elements in the node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len_of_data = 0;

	while (h)
	{
		printf("%u\n", h->n);
		len_of_data++;
		h = h->next;
	}
	return (len_of_data);
}
