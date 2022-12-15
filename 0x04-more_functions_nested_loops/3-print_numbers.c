#include "main.h"

/**
 * print_numbers - print 0 through 9
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		_putchar(number + '0');
	}

	_putchar('\n');
}
