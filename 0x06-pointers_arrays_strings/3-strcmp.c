#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Less than 0 if s1 is less than s2,
 *         greater than 0 if s1 is greater than s2,
 *         0 if s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	diff = *(unsigned char *)s1 - *(unsigned char *)s2;

	return diff;
}
