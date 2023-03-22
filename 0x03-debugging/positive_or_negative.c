#include "main.h"

/**
 * positive_or_negative - check whether number is positive or negative
 *
 * @i: variable
 *
 * Return: Always (0)
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d  is positive\n", i);
	else
		printf("%d  is negative\n", i);
}
