#include "main.h"

/**
* flip_bits - sets a certain bit to zero
* @n: the given integer
* @m: the desired to get integer
* Return: number of bits fliped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xval;
	unsigned int counter;

	xval = n ^ m;
	counter = 0;
	while (xval)
	{
		if (xval & 1ul)
			counter++;
		xval = xval >> 1;
	}
	return (counter);
}
