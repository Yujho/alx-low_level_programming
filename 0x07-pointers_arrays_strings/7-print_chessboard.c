#include "main.h"

/**
 * print_chessboard - point of entry
 * @a: is an array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int l;

	for (m = 0; m < 8; m++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[m][l]);
		}
		_putchar('\n');
	}
}
