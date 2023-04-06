#include "main.h"

int check_prime(int n, int z);

/**
 * is_prime_number - recursive function
 * @n: input integer
 *
 * Return: 1 if input integer is prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - recursive function
 * @n: input integer
 * @z: divisor
 *
 * Return: 1 if input integer is prime number, otherwise 0
 */
int check_prime(int n, int z)
{
	if (z == n)
	{
		return (1);
	}
	else if (n % z == 0)
	{
		return (0);
	}
	return (check_prime(n, z + 1));
}
