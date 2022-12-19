#include "main.h"
#include <stdio.h>

/**
 * print_array -print elements of an integer array
 * @a: int to check
 * @n: int to check
 * Return: 0
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
		if (arr != n - 1)
			printf("%d, ", a[arr]);
		else
			printf("%d", a[arr]);
	printf("\n");
}
