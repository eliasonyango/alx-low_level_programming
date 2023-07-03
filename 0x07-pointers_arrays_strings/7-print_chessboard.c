#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the 2D array representing the chessboard.
 *
 * Description: Each character in the chessboard array represents a piece.
 *              The function prints the characters in the array in an 8x8 grid.
 *              It assumes the array has dimensions of 8x8.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar(a[i][j]);

		putchar('\n');
	}
}
