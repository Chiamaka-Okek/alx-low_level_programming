#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to input array
 * @size: size of array
 * @cmp: function pointer used to compare values
 *
 * Return: index of first element if match exist else return -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL or cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}
	while (array)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else if (i == size)
		{
			return (-1);
		}
	}
	i++;
}
