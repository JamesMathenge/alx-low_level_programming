#include "main.h"

/**
* _memset- a function that fills memory with a constant byte
* @s: pointer to the memory block that will be filled
* @b: byte value that will be used to fill teh memory block
* @n: number of bytes to be filled
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		s[z] = b;
		z++;
	}
	return (s);
}
