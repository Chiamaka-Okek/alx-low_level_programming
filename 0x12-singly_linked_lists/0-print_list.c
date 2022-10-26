#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len_of_data = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			len_of_data++;
		}
		h = h->next;
	}
	return (len_of_data);
}
