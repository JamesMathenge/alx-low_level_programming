#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives including first one
 * @argc: number of arguments passed
 * @argv: array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int z = 0;

	while (z < argc)
	{
		printf("%s\n", argv[z]);
		z++;
	}
	return (0);
}
