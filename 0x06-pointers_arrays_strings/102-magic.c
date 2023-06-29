#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5] = {1, 2, 4, 98, 5};
    int *p;

    p = &a[2];
    *(p + 1) = 98; /* Add this line */

    printf("a[2] = %d\n", a[2]);

    return (0);
}
