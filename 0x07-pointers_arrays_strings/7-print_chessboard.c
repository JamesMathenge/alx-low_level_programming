#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: pointer to an array of arrays of char type
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int y = 0, z = 0;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)

			_putchar(a[y][z]);
		_putchar('\n');
	}
}
