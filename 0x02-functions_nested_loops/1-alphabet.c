#include "main.h"

/**
 * main - print alphabet in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');

	
}
