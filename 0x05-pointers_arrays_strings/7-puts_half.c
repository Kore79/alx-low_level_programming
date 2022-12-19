#include "main.h"

/**
 * puts_half - print half of a string
 * @str: use char to check
 * Return: 0
 */
void puts_half(char *str)
{
	int h_string = 0, i;

	while (str[h_string] != '\0')
		h_string++;
	if (h_string + 1 % 2 != '0')
		i = (h_string - 1) / 2;
	else
		i = (h_string / 2);
	i++;

		for (h_string = i; str[h_string] != '\0'; h_string++)
			_putchar(str[h_string]);
	_putchar('\n');
}
