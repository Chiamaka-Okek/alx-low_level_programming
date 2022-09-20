#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: is the input array
 * @n: is the number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
