#include <stdio.h>
#include <ctype.h>

/**
 * main - display the alphabets in lowercase except q and e
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
