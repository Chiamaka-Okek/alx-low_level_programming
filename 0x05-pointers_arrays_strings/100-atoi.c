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
	unsigned int total = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			null = 1;
			total = total * 10 + *s - '0';
		}
		else
		{
			break;
		}
		s++;
	}
	if (sign < 0)
	{
		total = (-total);
	}
	return (total);
}
