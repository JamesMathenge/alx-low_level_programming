#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: pointer to an array
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int y = 0;
	int z = 0;

	while (y < 8)
	{
		z = 0;
		while (z < 8)
		{
			_putchar(a[y][z]);
			_putchar(' ');
			z++;
		}
		_putchar('\n');
		y++;
	}
}
