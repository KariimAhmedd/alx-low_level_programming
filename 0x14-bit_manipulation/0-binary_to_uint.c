/**

*binary_to_uint - converts a binary string to an unsigned integer
*This function takes a null-terminated string of '0' and '1' characters representing a binary number as input, and returns its unsigned integer equivalent. If the input string is invalid (i.e., it contains non-binary characters or exceeds the maximum value of an unsigned integer), the function returns 0.
*@b: the binary string to convert
*Return: the unsigned integer equivalent of the binary string, or 0 if an error occurs.
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

