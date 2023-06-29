#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to print.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
	int i, j;
	unsigned char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		/* Print hex representation */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		/* Print character representation */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = *(b + i + j);
				if (c >= 32 && c <= 126)
					printf("%c", c);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
