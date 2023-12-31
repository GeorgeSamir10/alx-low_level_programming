#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: string input
 *
 * Return: 0 (success)
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < (1 / 2); i++)
	{
		temp = s[l - 1 - i];
		s[l - 1 - i] = s[i];
		s[i] = temp;
	}
}
