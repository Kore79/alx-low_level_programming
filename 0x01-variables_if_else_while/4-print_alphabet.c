#include <stdio.h>
#include <ctype.h>

/**
 * main - print the alphabets except q and e
 * Return: always 0
 */
int main(void)
{
	char alpha;

	alpha = 'A';
	while (alpha <= 'Z')
	{
		if (alpha != 'Q' && alpha != 'E')
		{
			putchar(tolower(alpha));
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
