#include <stdio.h>

/**
 * main - simple calculator menu that repeats until the user quits
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;

	choice = -1;

	printf("Simple Calculator\n");

	while (choice != 0)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		scanf("%d", &choice);

		if (choice == 0)
			printf("Bye!\n");
		else if (choice == 1)
			printf("Add\n");
		else if (choice == 2)
			printf("Subtract\n");
		else if (choice == 3)
			printf("Multiply\n");
		else if (choice == 4)
			printf("Divide\n");
		else
			printf("Invalid choice\n");
	}
	return (0);
}
