#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of strings
 *
 * Return: 1 if the program does not receive two arguments
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, multi;
	int z = 1;

	if (!(argc == 3))
	{
		printf("Error\n");
		return (1);
	}

	while (z < argc)
	{
		if (z == 1)
		{
			num_1 = atoi(argv[z]);
		}
		else if (z == 2)
		{
			num_2 = atoi(argv[z]);
		}
	z++;
	}

	multi = num_1 * num_2;

	printf("%d\n", multi);

	return (0);
}
