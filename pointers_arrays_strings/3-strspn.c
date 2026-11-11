#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to examine
 * @accept: the set of allowed bytes
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
