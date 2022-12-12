#include "main.h"
#include <stdio.h>
/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: the source string to be scanned
 * @accept: string to be contained in source string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int match = 0;

	for (i = 0; s[i] && s[i] != ' '; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
	}
	return (match);
}
