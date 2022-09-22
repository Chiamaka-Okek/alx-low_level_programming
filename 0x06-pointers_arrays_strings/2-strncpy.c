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
	int srclen = 0;

	while (dest[i] != '\0')
	{
		dest[i++] = '\0';
	}
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	for (i = 0; i < srclen && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[srclen] = '\0';
	return (dest);
}
