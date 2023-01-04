#include "main.h"

/**
 * factorial - return factorial of a number
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int number;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		number = n * factorial(n - 1);
	}
	return (number);
}
