#include "main.h"

/**
 *_strcat - concatenate two strings but add inputted number of bytes
 *		an inputted number of bytes from src.
 * @dest: String to be appended upon.
 * @src: string to be complete to be complete at end of the dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: return new concatenated string dest.
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
