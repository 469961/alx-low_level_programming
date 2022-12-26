#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 /*more headers goes there */

/** main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, last Num;

	srand(time(0));
	n = rand () - Rand_max / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is o\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not o\n", n, lastNum);
	return (0);
}
