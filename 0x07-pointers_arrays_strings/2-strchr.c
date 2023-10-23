#include "main.h"

/**
 * *_strchr - fills the memory slots with constant byte
 *
 * @s: A pointer for the constant
 * @c: the Constant
 *
 * Return: A pointer to S
*/

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
		{
			return (s + z);
		}
	}
	return ('\0');
}
