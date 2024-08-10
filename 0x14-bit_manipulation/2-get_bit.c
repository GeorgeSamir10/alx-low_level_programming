#include "main.h"

/**
* get_bit - gets the bit at a certain given index
* @n: the given integer
* @index: the given index
* Return: value of the index or -1 on error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
