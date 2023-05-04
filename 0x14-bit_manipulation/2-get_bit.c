#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index of the bit to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift_count = 0;
	unsigned long int bit_mask = 1;

	while (shift_count < index)
	{
		bit_mask <<= 1;
		shift_count++;

		if (bit_mask == 0)
			return (-1);
	}
	if (bit_mask & n)
		return (1);
	else
		return (0);
}
