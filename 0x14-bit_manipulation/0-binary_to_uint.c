#include "main.h"

/**
* binary_to_uint - converts given binary to unsigned int
* @b: the binary number
* Return: number in unsigned in
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		n <<= 1;
		n |= (*b - '0');
		b++;
	}
	return (n);
}
