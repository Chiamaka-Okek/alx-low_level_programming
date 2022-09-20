#include "main.h"

/**
 * _atoi - function converts a string to an integer
 *
 * @s: string
 *
 * Return: an integer else it returns 0
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int a = 0;

	while (*s++)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			a = a * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	}
	return (a);
}
