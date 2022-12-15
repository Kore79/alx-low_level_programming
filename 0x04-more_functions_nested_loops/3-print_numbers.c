#include "main.h"

/**
 * print_numbers - print 0 through 9
 * Return: void
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}

	_putchar('\n');
}
