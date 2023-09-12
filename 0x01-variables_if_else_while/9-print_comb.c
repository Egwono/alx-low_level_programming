#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function prints all single-digit numbers in base 10,
 * followed by a new line. It demonstrates basic printing using putchar.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
