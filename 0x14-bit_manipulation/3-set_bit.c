#include "main.h"

/**
* set_bit - set the given bit to 1
* @n: the given integer that contains the indexed bit
* @index: the index of the bit
* Return: 1 if successful -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
