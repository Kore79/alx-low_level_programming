#include "main.h"
#include <stdlib.h>

/**
 * _strdup-returns a pointer to a new string which is
 * a duplicate of the string str
 * @str:string
 * Return:pointer to the duplicate string or null
 * if unable to allocate memory
 */
char *_strdup(char *str)
{
	char *dup;
	int x, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		dup[x] = str[x];
	dup[len] = '\0';

	return  (dup);
}
