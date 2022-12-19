#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: use char to check
 * Return: 0
 */
void rev_string(char *s)
{
	int f = 0, g, h;
	char i;

	while (s[f] != '\0')
	{
		f++;
	}
	h = f - 1;
	for (g = 0; h >= 0 && g < h; h--, g++)
	{
		i = s[g];
		s[g] = s[h];
		s[c] = i;
	}
}
