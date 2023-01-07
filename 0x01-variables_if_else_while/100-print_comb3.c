#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: write a program that that prints all possible
 * different combination of two digits
 * Number must be seperated by,, followed by a space
 * T two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * prints only the smallest combination of two digits
 * Number shoud be printed in ascending order,with two digits
 * you can only use putchar function
 * (every other function (print,puts,etc,,)is forbidden)
 * you are not allowed to use any variable of type char
 * all your code shoud be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}

				}

				c++;
			}
			d++;
		}
		e++;

	}
	putchar('\n');
	return (0);
}
