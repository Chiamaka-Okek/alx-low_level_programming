#include "main.h"

/**
 * _pow_recursion(int x, int y) - prints the value of x raised to y
 *
 * @x: number to be multiplied
 * @y: power to be raised
 *
 * Return: value of raised integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
