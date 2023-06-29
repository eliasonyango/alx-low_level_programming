#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;

	/* Handle the case when n is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find the divisor to extract each digit */
	while (n / divisor >= 10)
		divisor *= 10;

	/* Extract and print each digit */
	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
