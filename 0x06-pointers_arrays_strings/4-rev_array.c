#include "main.h"

/**
 * reverse_array - reverse content of an array
 * @a:array
 * @n:int
 */
void reverse_array(int *a, int n)
{
	int c, arr;

	for (c = 0; (c < (n - 1) / 2); c++)
	{
		arr = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = arr;
	}
}
