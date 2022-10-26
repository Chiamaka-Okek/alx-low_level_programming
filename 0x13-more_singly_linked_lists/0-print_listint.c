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
size_t print_listint(const listint_t *h)
{
	size_t len_of_data = 0;

	while (h)
	{
		if (!h)
			printf("0");
		else
		{
			printf("%d\n", h->n);
			len_of_data++;
		}
		h = h->next;
	}
	return (len_of_data);
}
