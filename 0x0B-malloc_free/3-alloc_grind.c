#include "main.h"
#include <stdlib.h>

/**
 * alloc_grind - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NUll on failure or a pointer to a 2D array
 */
int **alloc_grind(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width < 0 || height <= 0)
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
		arr[i] = (int *) malloc(sizeof(int))
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (i = 0; i < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

