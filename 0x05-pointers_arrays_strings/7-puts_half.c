#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input
 *
 * Return: Success
 */
void puts_half(char *str)
{
	int x;
	int y;
	int length_of_the_string;

	length_of_the_string = 0;

	for (x = 0; str[x] != '\0'; x++)
		length_of_the_string++;

	y = (length_of_the_string / 2);

	if ((length_of_the_string % 2) == 1)
		y = ((length_of_the_string + 1) / 2);
	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
