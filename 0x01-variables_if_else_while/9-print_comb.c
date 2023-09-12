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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
