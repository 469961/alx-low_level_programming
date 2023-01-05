#include "main.h"

/**
 * _pow_recursion -> poer using recursion
 * @x: x ^ y
 * @y: the powet number
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
