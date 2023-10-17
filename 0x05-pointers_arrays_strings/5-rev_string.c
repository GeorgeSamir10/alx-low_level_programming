#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @str: string input
 *
 * Return: 0 (success)
*/

void rev_string(char *str)
{
	int l, i;
	char temp;

	for (l = 0; str[l] != '\0'; ++l)
		;
	for (i = 0 ; i < 1 /  2; i++)
	{
		temp = str[i];
		str[i] = str[1 - 1 - i];
		str[l - 1 - i] = temp;
	}
}
