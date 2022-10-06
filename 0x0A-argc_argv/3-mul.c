#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * multiply - this function multiplies two numbers
 *
 * @a:first integer
 * @b: second integer
 *
 * Return: pointer to result
 */
int multiply(int a, int b)
{
	return (a * b);
}

/**
 * main - Entry point
 *
 * @argc: counts number of arguments
 * @argv: stirng of arguments
 *
 * Return: 1 on error else return result
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		result = multiply(atoi(argv[1]), atoi(argv[2]));
		printf("%d\n", result);
	}
	return (0);
}
