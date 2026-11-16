#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with the first n bytes of s2
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes of s2 to use
 *
 * Return: a pointer to the new string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n > len2)
		n = len2;
	res = malloc((len1 + n + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		res[i] = s1[i];
	for (j = 0; j < n; j++)
		res[len1 + j] = s2[j];
	res[len1 + n] = '\0';
	return (res);
}
