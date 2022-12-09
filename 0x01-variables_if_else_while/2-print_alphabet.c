#include <stdio.h>
#include <ctype.h>

/**
 * main- display alphabet to lowercase with putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(tolower(alpha));
	putchar('\n');
	return (0);
}
