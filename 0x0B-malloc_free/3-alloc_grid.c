#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NUll on failure or a pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

