#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory of an array using malloc
 * @nmemb: number of elements to allocate
 * @size: size of elementsin bytes
 *
 * Return: pointer to the allocated memory else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *nme;
	unsigned int z = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	nme = (char *)ptr;

	while (z < (nmemb * size))
	{
		*(nme + z) = 0;
		z++;
	}

	return (ptr);
}
