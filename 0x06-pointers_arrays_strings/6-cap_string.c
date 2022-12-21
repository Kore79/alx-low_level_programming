#include "main.h"

/**
 * cap_string - capitalize words in a string
 * @s:string
 * Return:location of s
 */
char *cap_string(char *s)
{
	int b, c = 0;
	char a[] = " \t\n, ; . ! ? \" () {}";

	while (*(s + c))
	{
		if (*(s + c) >= 'a' && *(s + c) <= 'z')
		{
			if (c == 0)
				*(s + c) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (a[b] == *(s + c - 1))
						*(s + c) -= 'a' - 'A';
				}
			}
		}
		c++;
	}
	return (s);
}
