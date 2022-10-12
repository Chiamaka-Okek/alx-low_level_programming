#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: pointer to input string
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
