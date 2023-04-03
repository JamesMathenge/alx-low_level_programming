#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer in which the search for needle will be performed
 * @needle: pointer to the null-terminated string to be found in haystack
 *
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	int y;
	int z = 0;

	for (y = 0; haystack[y] != '\0'; y++)
	{

		if (needle[z] != '\0' && needle[z] == haystack[y])
		{
			z++;
		}
		if (needle[z] == '\0')
		{
			return (&haystack[y - z + 1]);
		}
		if (needle[0] == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
