#include "main.h"

/**
 * _strncpy - copy a string
 * @dest:string location
 * @src:source of string
 * @n:int length
 * Return:pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
