#include "main.h"

/**
 * *_strpbrk - Search for a set of bytes in strings
 *
 * @s: get string
 * @accept: match string
 *
 * Return: pointer to byte s or zero
*/

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *x;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				x = &s[a];
				return (x);
			}
			b++;
		}
		a++;
	}
	return (0);
}
