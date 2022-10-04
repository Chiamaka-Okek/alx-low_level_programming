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

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		str_len++;
	}
	new_str = malloc(sizeof(char) * (str_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		new_str[i] = str[i];
	}
	new_str[str_len] = '\0';
	return (new_str);
}
