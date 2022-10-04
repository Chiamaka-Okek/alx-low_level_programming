#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be copied
 *
 * Return: a pointer to the duplicated string or NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int str_length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
							
	while (*str)
	{
		new_str = malloc(strlen(str + 1) * sizeof(char));
		for (i = 0; i <= strlen(str); i++)
		{
			new_str[i] = str[i];
			return (new_str);
		/*	printf("%ld\n", strlen(str));*/
		}
		if (new_str == NULL)
		{
			return (NULL);
		}
	}
	free(new_str);
	return (0);
}
