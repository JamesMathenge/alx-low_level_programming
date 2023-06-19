#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the memory area where the function will copy data to
 * @src: the memory area whee the function will copy data from
 * @n: the number of bytes of data that should be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		dest[z] = src[z];
		z++;
	}
	return (dest);
}
