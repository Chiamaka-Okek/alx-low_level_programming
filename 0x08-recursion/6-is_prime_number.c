#include "main.h"

/**
 * is_prime_number - checks for prime number
 *
 * @n: input integer
 *
 * Return: 1 if prime number is found else return 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_prime(n, i));
}

/**
 * prime - checks if num is divisible by 2
 *
 * @n: integer to be checked
 * @i: result from the division
 *
 * Return: 1 if prime number is found else return 0
 */
int prime(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (is_prime(n, (i - 1)));
}
