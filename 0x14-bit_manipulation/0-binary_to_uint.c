#include  "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing the binary number
 *
 * Return: the converted number, or 0 if there is an error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int z = 0;
	int digit;

	if (b == NULL)
		return (0);

	while (b[z] != '\0')
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);

		digit = b[z] - '0';

		result = (result << 1) + digit;
		z++;
	}
	return (result);
}
