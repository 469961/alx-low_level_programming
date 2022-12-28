#include "main.h"
/**
 *  _strncpy - C function that copies a string, including the
 *  terminating null byte, using at most an inputted number of bytes.
 *  if the length of the source string is less than the maximum byte number.
 *  the remainder of the destination string is filled with null bytes.
 *  works identically to the standard library funtion 'strncpy'.
 *@dest: buffer storing the string copy
 *@src:the source string
 *@n:max number of byte copied
 *Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
