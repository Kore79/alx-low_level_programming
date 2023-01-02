#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @c:character occurence
 * @s:string
 * Return:a pointer to the first occurence of a character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
