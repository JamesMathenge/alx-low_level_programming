#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: pointer
 * @n: number of strings
 * @...: variable number of arguments
 *
 * Return: prints nil if one string is NULL
 * else If separator is NULL, it is not printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int z = 0;

	va_start(args, n);

	while (z < n)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (z < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		z++;
	}
	va_end(args);
	printf("\n");
}
