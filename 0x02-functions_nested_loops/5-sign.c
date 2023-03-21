#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: variable
 *
 * Return: 1 if n is greater than zero, 0  if n is zero
 * and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		_putchar(44);
		_putchar(' ');
		return (0);
	}
	else if (n == 0)
	{
		_putchar(48);
		_putchar(44);
		_putchar(' ');
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		_putchar(44);
		_putchar(' ');
		return (-1);
	}
	return (0);
}
