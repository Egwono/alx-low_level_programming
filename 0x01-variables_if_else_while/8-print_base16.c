#include <stdio.h>
/**
 *  * main - Prints numbers between 0 to 9 and letters between a to f.
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digit;

	for (hex_digit = '0'; hex_digit <= '9'; hex_digit++)
	{
		putchar(hex_digit);
	}
	for (hex_digit = 'a'; hex_digit <= 'f'; hex_digit++)
	{
		putchar(hex_digit);
	}
	putchar('\n');
	return (0);
}
