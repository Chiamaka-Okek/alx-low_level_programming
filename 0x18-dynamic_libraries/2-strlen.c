#include "main.h"

/**
 * _strlen - function returns the length of a string
 *
 * @s: input string
 *
 * Return: Always length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
