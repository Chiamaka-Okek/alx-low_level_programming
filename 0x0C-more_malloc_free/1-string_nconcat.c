#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: the number of bytes to be considered for concatenation
 *
 * Return: a pointer to the concatenated string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l1 = 0, l2 = 0;
	char *memory;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2])
	{
		l2++;
	}
	memory = malloc(l1 + n + 1);
	if (memory == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1(i); i++)
	{
		if (i < l1)
		{
			memory[i] = *s1, s1++;
		}
		else
		{
			memory[i] = *s2, s2++;
		}
	}
	memory[i] = '\0';
	return (memory);
}


