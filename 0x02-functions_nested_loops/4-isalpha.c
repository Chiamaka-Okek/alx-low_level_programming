#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 *@c: is either lowercase or uppercase
 *
 * Return: 1 if int c is a letter,lowercase or uppercase else return 0
 */
int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
