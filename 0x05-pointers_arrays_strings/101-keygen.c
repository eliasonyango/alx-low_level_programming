#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 20

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int randomCharType = rand() % 3;

		if (randomCharType == 0)
		{
			password[i] = 'A' + rand() % 26; /* Uppercase letter */
		}
		else if (randomCharType == 1)
		{
			password[i] = 'a' + rand() % 26; /* Lowercase letter */
		}
		else
		{
			password[i] = '0' + rand() % 10; /* Digit */
		}
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s", password);

	return (0);
}
