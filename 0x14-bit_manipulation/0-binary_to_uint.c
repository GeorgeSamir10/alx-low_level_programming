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
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
