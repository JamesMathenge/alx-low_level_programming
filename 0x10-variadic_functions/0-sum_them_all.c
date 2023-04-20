#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments that will be passed to the function
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int z = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (z < n)
	{
		sum = sum + va_arg(args, int);
		z++;
	}
	va_end(args);

	return (sum);
}
