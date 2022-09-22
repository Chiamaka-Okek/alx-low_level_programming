#include "main.h"

/**
 * *_strncpy - function copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int src_length = 0;

	while (src[src_length] != '\0')
	{
		src_length++;
	}
	for (i = 0; i < src_length && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[src_length] = '\0';
	return (dest);
}
