#include "main.h"

/**
 * _strcat - concatenate two strings but add inputted number of bytes
 * @dest: String to be appended upon
 * @src: string to be complete to be complete at end of the dest
 * @n: integer parameter to compare index to
 * Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
