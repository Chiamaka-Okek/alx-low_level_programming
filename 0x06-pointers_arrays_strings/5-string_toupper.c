#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @a: input string
 *
 * Return: Always 0
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
		i++;
	}
	return (a);
}
