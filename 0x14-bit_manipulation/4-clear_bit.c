#include "main.h"

/**
*clear_bit - clears a bit at a given index in a decimal number
*@n: a pointer to the decimal number to modify
*@index: the index of the bit to clear (0-based)
*Return: 1 on success, or -1 if an error occurred.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

