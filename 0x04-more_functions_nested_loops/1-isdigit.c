#include "main.h"

/**
 * _isdigit - check for digit from range 0 to 9
 * @c: character to check
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
