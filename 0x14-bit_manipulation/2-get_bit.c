#include "main.h"

/**
*get_bit - returns the value of a bit at a given index in a decimal number
*@n: the decimal number to search
*@index: the index of the bit to retrieve (0-based)
*Return: the value of the bit at the specified index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

