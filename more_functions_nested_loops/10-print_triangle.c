#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#'
 * @size: the size of the triangle (number of rows)
 */
void print_triangle(int size)
{
	int row, space, hash;

	/* If size is 0 or less, print only a new line */
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 1;
	/* Outer loop: one iteration per row */
	while (row <= size)
	{
		space = 0;
		/* First inner loop: print (size - row) leading spaces */
		while (space < size - row)
		{
			_putchar(' ');
			space++;
		}

		hash = 0;
		/* Second inner loop: print row '#' characters */
		while (hash < row)
		{
			_putchar('#');
			hash++;
		}

		/* End the row with a new line */
		_putchar('\n');
		row++;
	}
}
