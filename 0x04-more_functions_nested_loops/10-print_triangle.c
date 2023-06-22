#include "main.h"

/**
 * print_triangle - Prints a triangle of a specified size.
 * @size: The size of the triangle.
 *
 * If size is 0 or less, only prints a newline character.
 * Uses the character '#' to print the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(' ');

		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
