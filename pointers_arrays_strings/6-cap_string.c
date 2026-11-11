#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: a pointer to str.
 */
char *cap_string(char *str)
{
	int i, j, cap;
	char sep[] = " \t\n,;.!?\"(){}";

	cap = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		cap = 0;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
				cap = 1;
		}
	}
	return (str);
}
