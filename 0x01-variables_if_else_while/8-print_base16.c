#include <stdio.h>

/**
 * main - print base 16 numbers in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	int b;
	char letter;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
