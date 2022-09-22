#include "main.h"
#include <string.h>

/**
 * _strcat - function concatenates two strings
 *
 * @dest: destination string
 * @src: source string to be appended
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int L1 = strlen(dest);
	int L2 = strlen(src);

	for (i = 0; i <= L2; i++)
	{
		dest[L1 + i] = src[i];
	}
	return (dest);
}
