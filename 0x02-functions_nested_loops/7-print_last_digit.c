#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: compiled variable
 *
 * Return: last digit of a number
 */
int print_last_digit(int r)
{
	int a;

	a = r % 10;
	if (r < 0)
	{
		a = a * -1;
	_putchar(r + '0');
	return (r);
	}
	return (0);
}
