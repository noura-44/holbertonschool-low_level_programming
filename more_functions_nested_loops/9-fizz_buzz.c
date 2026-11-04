#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *        multiples of 3 print Fizz, multiples of 5 print Buzz,
 *        multiples of both print FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		/* Print a space before every item except the first one */
		if (i != 1)
			printf(" ");

		/* Check multiples of both 3 and 5 FIRST */
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		i++;
	}
	printf("\n");
	return (0);
}
