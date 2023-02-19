#include <stdio.h>

/**
 * main - Entry point of the program
 * main - Print single digit numbers in base 10 using putchar() function
 *
 * This program prints single digit numbers of base 10 from 0 to 9,
 * followed by a new line.
 * This program prints digits 0 through 9, followed by a newline,
 * using only the putchar() function and no char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	for (i = 48; i < 58; i++)
	{
		printf("%d", i);
		putchar(i);
	}
	printf("\n");
	putchar('\n');

	return (0);
return (0);
}
