#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: input integer
 *
 * Return: a pointer to allocated memory or return 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *mem;
	mem = malloc (b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
