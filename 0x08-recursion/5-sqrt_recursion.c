#include "main.h"

int _sqrt_recursion_z(int n, int z);

/**
 * _sqrt_recursion - function returning the natural square root of a number
 * @n: number to find the natural square root of
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_z(n, 0));
}

/**
 * _sqrt_recursion_z - function returning the natural square root of a number
 * @n: number to find the natural square root of
 * @z: current guess for the natural square root
 *
 * Return: square root of a number
 */
int _sqrt_recursion_z(int n, int z)
{
	if (z * z > n)
	{
		return (-1);
	}
	else if (z * z == n)
	{
		return (z);
	}
	else
	{
		return (_sqrt_recursion_z(n, z + 1));
	}
}
