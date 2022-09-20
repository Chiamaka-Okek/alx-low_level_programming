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
	char *copy = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (*copy);
}
