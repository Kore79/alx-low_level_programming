#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat-concatenate two string
 * @s1:1st parameter
 * @s2:2nd parameter
 * Return:point to newly allocated space s1, s2
 *
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, con, con2, con3;
	char *string;

	con2 = con3 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			con2++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			con3++;
	}

	con = con2 + con3;
	string = (char *)malloc(sizeof(char) * (con + 1));
	if (string == NULL)
		return (NULL);

	for (x = 0; x < con2; x++)
		string[x] = s1[x];
	for (y = 0; y < con3; y++, x++)
		string[x] = s2[y];
	string[con] = '\0';

	return (string);
}
