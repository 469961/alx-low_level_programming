#include "main.h"

/**
 * print_alphabet_x10 - 10 times the alphabet,in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char la;

	while (count++ <= 9)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}


