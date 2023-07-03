#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix (2D array).
 * @size: Size of the square matrix.
 *
 * Description: The function prints the sum of the diagonal elements
 *              from the top-left to the bottom-right, and from the top-right
 *              to the bottom-left. It assumes the matrix is a square matrix
 *              of size `size x size`.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}
