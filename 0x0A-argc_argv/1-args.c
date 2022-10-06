#include <stdio.h>


/**
 * main - Entry point
 *
 * @argc: counts the argument passed
 * @argv: string of arguments
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
