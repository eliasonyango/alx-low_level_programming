#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result or 0 if the result cannot fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1); /* Length of n1 */
	int len2 = strlen(n2); /* Length of n2 */
	int max_len = len1 > len2 ? len1 : len2; /* Maximum length */
	int carry = 0; /* Carry value */
	int sum; /* Sum of digits */

	/* Check if the result can be stored in r */
	if (max_len + 1 > size_r)
		return (0);

	/* Set the result buffer to '\0' */
	memset(r, '0', max_len);
	r[max_len] = '\0';

	/* Perform addition digit by digit */
	while (len1 > 0 || len2 > 0)
	{
		/* Calculate sum of digits and carry */
		sum = carry;
		if (len1 > 0)
			sum += n1[--len1] - '0';
		if (len2 > 0)
			sum += n2[--len2] - '0';

		/* Update carry and append the sum to the result */
		carry = sum / 10;
		r[--max_len] = (sum % 10) + '0';
	}

	/* If there is a remaining carry, add it to the result */
	if (carry)
	{
		/* Check if there is enough space for the carry */
		if (max_len == 0)
			return (0);
		r[--max_len] = carry + '0';
	}

	/* If the result has leading zeros, move the result to the beginning of the buffer */
	if (max_len > 0)
		memmove(r, r + max_len, strlen(r + max_len) + 1);

	return (r);
}
