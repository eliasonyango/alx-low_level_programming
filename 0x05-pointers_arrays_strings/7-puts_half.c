#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * Return: None
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int i, n;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
