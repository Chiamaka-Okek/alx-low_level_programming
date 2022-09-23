#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of element of the array
 *
 * Return: reversed integers
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	char reverse_array;

	while (i < n--)
	{
		j = a[i];
		a[i++] = a[n];
		a[n] = j;
	}
}
