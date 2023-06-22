#include "main.h"

/**
 * print_square - Prints a square of a specified size.
 * @size: The size of the square.
 *
 * If size is 0 or less, only prints a newline character.
 * Use the character '#' to print the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');

		_putchar('\n');
	}
}

