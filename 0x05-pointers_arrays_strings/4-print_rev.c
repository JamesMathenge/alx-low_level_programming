#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * @s: string
 *
 * return: Always 0 (Success)
 */
void print_rev(char *s)
{
		int length = 0;
		int tan;

		while (*s != '\0')
		{
			length++;
			s++;
		}
		s--;
		for (tan = length; tan > 0; tan--)
		{
			_putchar(*s);
			s--;
		}
		_putchar('\n');
}
