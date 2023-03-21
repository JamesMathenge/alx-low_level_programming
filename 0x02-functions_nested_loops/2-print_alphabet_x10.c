#include "main.h"

/**
 * print_alphabet_x10 - prints 10times the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num;
	char alphabet;

	for (num = 0; num <= 9; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
	_putchar('\n');
	}
}
