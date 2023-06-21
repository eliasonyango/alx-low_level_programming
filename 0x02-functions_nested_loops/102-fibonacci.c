#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 * separated by a comma and space, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 0;
	long int prev = 0, curr = 1, next;

	while (count < 50)
	{
		printf("%ld", curr);

		if (count < 49)
			printf(", ");

		next = prev + curr;
		prev = curr;
		curr = next;

		count++;
	}

	printf("\n");

	return (0);
}
