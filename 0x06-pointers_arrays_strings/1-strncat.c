#include "main.h"

/**
 * _strncat - function to concatenate two stirngs
 *
 * @dest: destination string
 * @src: source
 * @n: number of string bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_length = 0;

	while (dest[i++])
	{
		dest_length++;
	}
	for (i = 0; i <= src[i] && i<n; i++)
	{
		dest[dest_length++] = src[i];
	}
	return (dest);
}
