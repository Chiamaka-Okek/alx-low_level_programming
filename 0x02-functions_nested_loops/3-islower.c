#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 *@c: single lowercase
 *
 * Return: Always 1 if int c is lowercase else return 0
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
