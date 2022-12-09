#include <stdio.h>

/**
 * main -print numbers with putchar function
 * Return: always 0 (success)
 */
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
