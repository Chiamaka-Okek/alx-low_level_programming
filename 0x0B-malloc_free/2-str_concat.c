#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: input string 1
 * @s2: string to be concantenated
 *
 * Return:pointer to newly allocated space for concatenated strings
 */
char *str_concat(char *s1, char *s2);
{
	char *str_concat;
	int i;
	int j = 0;
	int length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}
	str_concat = malloc(sizeof(char) * length);
	if (str_concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str_concat[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		str_concat[j++] = s2[i];
	}
	return (str_concat);
}
