#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int length = 0;
	char rev;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < length--)
	{
		rev = s[i];
		s[i++] = s[length];
		s[length] = rev;
	}
}
