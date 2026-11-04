#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of lines (each line has one backslash)
 */
void print_diagonal(int n)
{
	int line, space;

	/* If n is 0 or less, print only a new line */
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	line = 0;
	/* Outer loop: one iteration per output line */
	while (line < n)
	{
		space = 0;
		/* Inner loop: print "line" spaces before the backslash */
		while (space < line)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		line++;
	}
}
