#include "main.h"

/**
 * _strcpy - function copies the string pointed to by src
 *
 * @src: pointer to the source string
 * @dest: pointer to the string destination
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int srclen = 0;

	while (dest[i] != '\0')
	{
		dest[i++] = '\0';
	}
	i = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	for (i = 0; i < srclen; i++)
	{
		dest[i] = src[i];
	}
	dest[srclen] = '\0';
	return (dest);
}
