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
	char *a = dest;
	char *b = src;

	while (*src)
	{
		src_length++;
		src++;
	}
	src_length++;
	if (n > src_length)
	{
		n = src_length;
	}
	src = b;
	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (a);
}
