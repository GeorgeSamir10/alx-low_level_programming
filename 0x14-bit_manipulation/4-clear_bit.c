#include "main.h"

/**
* clear_bit - sets a certain bit to zero
* @n: the given integer
* @index: the given index
* Return: 1 if successful -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
