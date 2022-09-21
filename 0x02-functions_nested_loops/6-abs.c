#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 *@a: is the intger
 *
 * Return: Always 0 (Success)
 */
int _abs(int a)
{

	if (a < '0')
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
