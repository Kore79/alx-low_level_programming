#include "main.h"

/**
 * look - look for square root
 * @x:int
 * @y:int
 *
 * Return:int
 */
int look(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (look(x + 1, y));
}

/**
 * _sqrt_recursion - natural square root of number
 * @n:int to find sqrt
 * Return:square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (look(1, n));
}
