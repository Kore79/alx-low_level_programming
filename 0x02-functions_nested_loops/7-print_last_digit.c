#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to get the last digit from
 * Return: the  value of the last digit
 */
int print_last_digit(int n)
{
	int c;

	if (n < 0)
		n = -n;

	c = n % 10;

	if (c < 0)
		c = -c;

	_putchar(c + '0');

	return (c);
}
