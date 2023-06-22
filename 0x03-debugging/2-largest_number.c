#include "main.h"

/**
 * largest_number - Returns the largest of 3 numbers
 * @a: First integer
 * @b: Second integer
 * @c: Third integer
 *
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = a; /* Assume a is the largest initially */

	if (b > largest)
		largest = b; /* Update largest if b is greater than the current largest */

	if (c > largest)
		largest = c; /* Update largest if c is greater than the current largest */

	return (largest);
}
