#include "main.h"

/**
 * print_rev - print a string reverse
 *
 * @s: string to be  printed
 */
void print_rev(char *s)
{
	int r, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (r = n - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
