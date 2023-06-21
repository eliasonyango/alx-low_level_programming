#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by a comma and space,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long int first = 1, second = 2, next;

	printf("%lu, %lu", first, second);

	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
