#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @n: number of arguments
 * @separator: string
 * Return: integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int z = 0;

	va_start(args, n);

	while (z < n)
	{
	printf("%d", va_arg(args, int));
	if (separator != NULL && z < n - 1)
	{
		printf("%s", separator);
	}
	z++;
	}
	printf("\n");

	va_end(args);
}
