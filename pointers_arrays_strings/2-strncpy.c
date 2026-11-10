#include "main.h"

/**
 * _strncpy - copies a string, using at most n bytes from src
 * @dest: the destination buffer
 * @src: the string to copy
 * @n: maximum number of bytes to write to dest
 *
 * Return: a pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
