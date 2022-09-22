#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: 0 if strings are equal
 *  1 if first non matching character in s1 is greater than s2,
 *  else return -1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1[i] != s2[1])
		{
			return (s1 - s2);
			i++;
		}
	}
	return (0);
}
