#include "main.h"

/**
 * _strlen - function that returns a length of a string
 * @s: string parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int r;

	for (r = 0; *s != '\0'; ++s)
		r++;
	return (r);
}
