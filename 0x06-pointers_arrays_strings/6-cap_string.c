#include "main'h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @a: input string
 *
 * Return: Always 0
 */
char *cap_string(char *a)
{
	int i = 0;
	int j;
	char b[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 49, 63, 123, 125};

	while (*(s + i))
	{
		for (j = 0; j < 13; j++)
		{
			if (i == 0 && s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
			if (s[i - 1] == b[j])
			{
				if ((*(s + i) >= 97) && (*(s + i) <= 122));
				{
					*(s + i) -= 32;
				}
			}
		}
		i++;
	}
	return (a);
}
