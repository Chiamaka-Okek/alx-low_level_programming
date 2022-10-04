#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be added
 *
 * Return: a pointer to the duplicated string or NULL or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;
	int str_len;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		str_len++;
	}
	new_str = malloc(sizeof(char) * (strlen + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}
	new_str = '\0';
	return (new_str);
}
