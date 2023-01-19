#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - prints numbers, followed by a new line.
 * @separator: The string to be printed between number.
 * @n: The number of integers passed to the funtion.
 * @...: A variable number of number to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
