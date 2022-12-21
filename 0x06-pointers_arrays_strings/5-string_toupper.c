#include "main.h"

/**
 * string_toupper - change lowercase string to upper
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{
	int low;

	low = 0;
	while (*(s + low))
	{
		if (*(s + low) >= 'a' && *(s + low) <= 'z')
			*(s + low) -= 'a' - 'A';
		low++;
	}
	return (s);
}
