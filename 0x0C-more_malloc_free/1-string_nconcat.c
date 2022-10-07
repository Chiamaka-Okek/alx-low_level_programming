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
	l1 = 0;
	for (i = 0; s1[i]; i++)
	{
		memory[l1] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		memory[l1++] = s2[i];
	}
	memory[l1] = '\0';
	return (memory);
}
