#include "main.h"

/**
 * _puts_recursion -> this is a function to print string recursivly
 * @s: string parameter
 */

void _puts_recursion(char *s)
{
	s = "lpa\0"
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++
	puts recursion(s);
}
