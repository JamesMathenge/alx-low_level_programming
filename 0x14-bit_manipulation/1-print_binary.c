#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int current;
	int z = 63;

	while (z >= 0)
	{
		current = n >> z;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
		z--;
	}
	if (!count)
	{
		_putchar('0');
	}
}
