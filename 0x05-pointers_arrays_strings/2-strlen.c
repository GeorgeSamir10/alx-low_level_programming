#include "main.h"

/**
 * _strlen - returns length of any string
 *
 * @str: string input parameter
 *
 * Return: length of a string
*/

int _strlen(char *str)
{
	int count;

	for (count = 0; *str != '\0'; str++)
		++count;
	return (count);
}
