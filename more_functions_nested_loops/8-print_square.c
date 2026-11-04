#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: the size of the square (number of rows and columns)
 */
void print_square(int size)
{
	int row, col;

	/* If size is 0 or less, print only a new line */
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 0;
	/* Outer loop: one iteration per row */
	while (row < size)
	{
		col = 0;
		/* Inner loop: print size '#' characters in this row */
		while (col < size)
		{
			_putchar('#');
			col++;
		}
		/* End the row with a new line */
		_putchar('\n');
		row++;
	}
}
