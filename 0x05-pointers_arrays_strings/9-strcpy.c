#include "main.h"

/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: use char
 * @src: use char
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
		dest[s] = src[s];
	dest[s] = '\0';
	return (dest);
}
