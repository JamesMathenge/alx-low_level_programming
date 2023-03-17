#include <stdio.h>

/**
 * main -  prints all positive single digit numbers using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;
	char alphabet = 'a';

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	while (alphabet <= 'f')
	{
		putchar(alphabet + 0);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
