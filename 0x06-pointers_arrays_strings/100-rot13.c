#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to nstrings params
 * Return: success
 */

char *rot13(char *)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datarot[j]);
				break
			}
		}
	}
	return (s);
}
