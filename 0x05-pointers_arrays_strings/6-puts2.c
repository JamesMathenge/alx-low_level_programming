#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first one
 * @str: input
 *
 * Return: Alway 0 (Success)
 */
void puts2(char *str)
{
	int channel = 0;
	int b = 0;
	char *a = str;
	int c;

	while (*a != '\0')
	{
		a++;
		channel++;
	}
	b = channel - 1;
	for (c = 0 ; c <= b ; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
		_putchar('\n');
}
