#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 *
 * Return: 1 if number contains symbols that are not digits
 * otherwise 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int y;

	for (y = 1; y < argc; y++)
	{
		int z = 0;

		while (argv[y][z])
		{
			if (argv[y][z] < '0' || argv[y][z] > '9')
			{
				printf("Error\n");
				return (1);
			}
			z++;
		}
		sum = sum + atoi(argv[y]);
	}

	printf("%d\n", sum);
	return (0);
}
