#include "main.h"

/**
 * _strcat - function to concatenate
 *
 * @dest: destination
 * @src: source
 *
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_length = 0;

	while (dest[i++])
	{
		dest_length++;
	}
	for (i = 0; i <= src[i]; i++)
	{
		dest[dest_length++] = src[i];
	}
	return (dest);
}
