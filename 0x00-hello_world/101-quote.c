#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to standard error using the write function.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;

	write(STDERR_FILENO, message, len);
	return (1);
}
