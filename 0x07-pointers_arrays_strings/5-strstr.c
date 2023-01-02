#include "main.h"

/**
 * _strstr - function that locates a substring
 * @needle:1st occurence of substring
 * @haystack:string to search
 * Return:a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int n = 0;
	unsigned int h = 0;

	while (haystack[n])
	{
		while (needle[h] && (haystack[n] == needle[0]))
		{
			if (haystack[n + h] == needle[h])
				h++;
			else
				break;
		}
		if (needle[h])
		{
			n++;
			h = 0;
		}
		else
			return (haystack + n);
	}
	return (0);
}
