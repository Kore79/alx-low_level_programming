#include <stdio.h>
#include <ctype.h>

/**
 * main - display alphabets in lower and uppercase
 * Return: always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(tolower(alpha));
        for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(toupper(alpha));
	putchar('\n');
       	return (0);
}	
