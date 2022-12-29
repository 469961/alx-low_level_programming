#include "main.h"

/**
 * reverse_array - function that reverse content of array
 * @a: array
 * @n: The number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
