#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints integers from n to 98
 * @n: starting number
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		i = n;
		while (i <= 98)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);

			i++;
		}
	}
	else
	{
		i = n;
		while (i >= 98)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);

			i--;
		}
	}
}
