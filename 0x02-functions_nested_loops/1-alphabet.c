#include "main.h"

/**
 * _putchar - prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
