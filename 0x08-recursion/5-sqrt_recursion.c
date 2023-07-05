#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root using recursion.
 * @n: The number to calculate the square root of.
 * @i: The current value to check for square root.
 *
 * Return: The square root of n, or -1 if no square root is found.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0));
}

