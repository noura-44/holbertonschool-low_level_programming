#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 *
 * Return: Nothing.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
	_putchat(*str);
	str++;
	}
	_putchar('\n');
}
