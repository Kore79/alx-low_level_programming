#include "main.h"

/**
 * _memset -function that fills memory with a constant byte
 * @s: constant byte
 * @b: memory area pointer
 * @n: bytes to the memorrry area
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		s[p] = b;
		p++;
	}

	return (s);

}
