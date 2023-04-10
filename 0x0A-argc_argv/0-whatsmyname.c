#include "main.h"
#include <stdio.h>

/**
 * main - the name of the program itself
 * @argc: the number of command-line arguments
 * @argv: pointer to an array of strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
