#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints sum of two diagonals of square matrix
 * @a: pointer to an integer array a
 * @size: an integer value size
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int z = 0;
	int diag1_sum = 0;
	int diag2_sum = 0;

	while (z < size)
	{
		diag1_sum = diag1_sum + a[z * size + z];
		diag2_sum = diag2_sum + a[z * size + (size - z - 1)];
		z++;
	}
	printf("%d, %d\n", diag1_sum, diag2_sum);
}
