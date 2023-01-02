#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n:copies function
 * @src:byte from memory area
 * @dest:to memory area
 * Return:pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p = 0;

	while (p < n)
	{
		dest[p] = src[p];
		p++;
	}

	return (dest);

}
