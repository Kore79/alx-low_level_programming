#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -print sum of two diagonals
 * @a:points to the first element in matrix
 * @size:of matrix
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int x, y, z;
	int r = 0;
	int c = 0;

	for (x = 0; x < size; x++)
	{
		z = (x * size) + x;
		r += *(a + z);
	}
	for (y = 0; y < size; y++)
	{
		z = (y * size) + (size - 1 - y);
		c += *(a + z);
	}
	printf("%d, %d\n", r, c);
	
}
