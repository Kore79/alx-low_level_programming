#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s:1st occurence of string
 * @accept:matches one of the bytes
 * Return:pointer to the byte in s that matches the one in accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int sh;

	while (*s)
	{
		for (sh = 0; accept[sh]; sh++)
		{
			if (*s == accept[sh])

				return (s);
		}
		s++;
	}

	return ('\0');
}
