#include "main.h"

/**
 * *_memset - fills empty memory slots with a const byte
 *
 * @b: the required constant
 * @n: maximum bytes to be used
 * @s: A Pointer used to fill the memory with the constant
 *
 * Return: S
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; n > 0; z++; n--)
	{
		s[z] = b;
	}
	return (s)
}
