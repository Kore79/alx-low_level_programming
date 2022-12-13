#include "main.h"

/**
 *  print_alphabet_x10 -print 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int y;

	y = 0;
	while (y < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		++y;
	}
}
