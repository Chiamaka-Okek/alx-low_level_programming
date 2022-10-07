#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: input array
 * @size: size of the array in bytes
 *
 * Return: pointer to allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memory = malloc(nmemb * size);
	if (memory != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			memory[i] = 0;
		}
		return (memory);
	}
	else
	{
		return (NULL);
	}
}
