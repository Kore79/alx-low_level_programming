#include "main.h"

/**
 * _strlen - function that returns a length of a string
 * @s: check char
 * Return: 0
 */
int _strlen(char *s)
{
	int r = 0;

	for (; s++;)
		r++;
	return (r);
}
