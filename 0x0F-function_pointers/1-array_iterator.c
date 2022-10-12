#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a  function given as parameter
 *
 * @array: pointer to input array
 * @size: size of the array
 * @action: is a pointer to the function required
 */
void array_iterator(int *array, size_t size, void (*action)(int)
{
	int i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
