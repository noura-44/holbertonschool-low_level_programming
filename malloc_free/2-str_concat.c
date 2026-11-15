#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the new string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int len1, len2, i, j;

	len1 = 0;
	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;
	len2 = 0;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;
	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < len2; j++)
		res[len1 + j] = s2[j];
	res[len1 + len2] = '\0';
	return (res);
}
