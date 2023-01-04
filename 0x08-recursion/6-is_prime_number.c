#include "main.h"

/**
 * look -look to see if number is prime
 * @x:int
 * @y:int
 * Return:int
 */
int look(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (look(x + 1, y));

}


/**
 * is_prime_number - prime number or not
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (look(2, n));
}
