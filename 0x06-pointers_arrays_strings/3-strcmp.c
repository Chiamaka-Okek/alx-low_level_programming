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
	if (s1[0] < s2[0])
	{
		return (-1);
	}
	else if (s1[0] > s2[0])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
