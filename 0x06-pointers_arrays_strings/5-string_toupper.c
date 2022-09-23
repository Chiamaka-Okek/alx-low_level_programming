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

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (a);
}
