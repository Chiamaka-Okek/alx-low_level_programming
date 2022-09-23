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
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		for (j = 0; j < 13; j++)
		{
			if (i == 0 && s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
			if (s[i - 1] == a[j])
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
