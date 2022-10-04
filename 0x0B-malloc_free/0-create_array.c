#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of char and initializes it with specific char
 *
 * @size: size of the array
 * @c: char c: character used for the intializtion
 *
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		/*a = malloc(size * sizeof(char))*/;
		if (a == NULL)
		{
			return (NULL);
		}
		a[i] = c;
		i++;
	}
	return (a);
}
