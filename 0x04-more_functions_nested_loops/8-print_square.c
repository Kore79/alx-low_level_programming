#include "main.h"

/**
 * print_square - print a square of size 'size'
 * @size: size of the square
 *
 */
void print_square(int size)
{
	int p, q;

	if (size <= 0)
		_putchar('\n');

	for (p = 0; p < size; p++)
	{
		for (q = 0; q < (size); q++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
