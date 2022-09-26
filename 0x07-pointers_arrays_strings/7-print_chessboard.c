#include "main.h"

/**
 * print_chessboard - board to print
 * @a: prints all things
 * Return: returns crap
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int e;

	for (c = 0; c < 8; c++)
	{
		for (e = 0; e < 8; e++)
		{
			_putchar(a[c][e]);
		}
		_putchar('\n');
	}
}
