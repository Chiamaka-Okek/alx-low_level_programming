#include "main.h"
#include <stdlib.h>

/**
 * array_range - this function allocates memory for an array using malloc
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: array from min to max included
 */
int *array_range(int min, int max)
{
	int *memory;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	memory = malloc(sizeof(int) * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		memory[i] = min + i;
	}
	return (memory);
}
