#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int number;
	int multiplier;
	int product;

	number = 0;
	while (number < 10)
	{
		multiplier = 0;
		while (multiplier < 10)
		{
			product = number * multiplier;

			if (multiplier != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}

			multiplier++;
		}
		_putchar('\n');
		number++;
	}
}
