#include "main.h"

/**
 * cap_string - Capitalize all words of a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first letter */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';

	for (i = 1; str[i] != '\0'; i++)
	{
		/* Check for separators */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			/* Capitalize the next letter */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 'a' - 'A';
		}
	}

	return (str);
}
