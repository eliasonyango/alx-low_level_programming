#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be concatenated from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; i < n && src[i]; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';

	return (dest);
}
