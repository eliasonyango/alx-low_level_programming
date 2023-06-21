#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence, where the values do not exceed 4,000,000.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int limit = 4000000;
	long int prev = 1, curr = 2, next;
	long int sum = 0;

	while (curr <= limit)
	{
		if (curr % 2 == 0)
			sum += curr;

		next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
