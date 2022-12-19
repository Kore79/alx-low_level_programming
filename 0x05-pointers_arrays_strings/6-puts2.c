#include "main.h"

/**
 * puts2 - print every character on a string staring with 1st character
 * @str: use char to check
 * Return: 0
 */
voi puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
