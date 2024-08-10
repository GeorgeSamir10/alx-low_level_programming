#include "main.h"

/**
* get_endianness - checks the endianness

* Return: 0 if large, 1 if small
*/

int get_endianness(void)
{
	unsigned long int num = 1;

	return (*(char *) & num);
}
