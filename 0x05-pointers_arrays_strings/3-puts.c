#include "main.h"

/**
 * _puts - function to print string
 * @str:string
 *
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
