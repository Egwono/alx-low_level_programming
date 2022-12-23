#include "main.h"
/**
 * _strncat - concentrate two strings but add inputed number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index to
 * Retuen: returns new concentrated sting
 *
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = o, dest_len = o;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}

