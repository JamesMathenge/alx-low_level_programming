#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: pointer to a character
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
