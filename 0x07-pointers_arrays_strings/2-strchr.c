#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates characeter in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	if (s[i])
	{
		return (s + i);
	}
	return (NULL);
}
