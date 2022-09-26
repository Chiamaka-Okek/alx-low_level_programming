#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character ina string
 *
 * @s: string to be searched
 * @c: character to be searched for in string
 *
 * Return: pointer to the first occurrence of character c
 */
char *_strchr(char *s, char c)
{
	int i;
	int length = 0;
	char *p;

	while (s[length] != '\0')
	{
		length++;
		for (i = 0; i <= length; i++)
		{
			if (s[i] == c)
			{
				p = &s[i];
				break;
			}
		}
	}
	return (p);
}
