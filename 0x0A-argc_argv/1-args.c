#include <stdio.h>

/**
 * main-prints number of argument passed into it
 * @argc:argument count
 * @argv:array of strings
 * Return:0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
