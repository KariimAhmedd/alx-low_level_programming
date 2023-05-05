#include "main.h"

/**
*set_bit - set a bit in a decimal number
*This function sets a bit at a given index (0-based) in a decimal number to 1.
*@n: a pointer to the decimal number to modify
*@index: the index of the bit to set to 1
*Return: 1 on success, -1 if the index is out of bounds.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

