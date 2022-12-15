#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times
 *
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
