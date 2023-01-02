#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a:pointer to chessboard piece
 * Return:void
 */
void print_chessboard(char (*a)[8])
{
	int cb, i;

	for (cb = 0; cb < 8; cb++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[cb][i]);
		}
		_putchar('\n');
	}
}
