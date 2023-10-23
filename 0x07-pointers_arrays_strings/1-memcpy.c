#include "main.h"

/**
 * *_memcpy -copies memory slots to another
 *
 * @dest: memory slot
 * @src: source slot
 * @n: the length of the file will be copied
 *
 * Return: dest pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
