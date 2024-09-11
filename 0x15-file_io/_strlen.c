#include "main.h"

/**
* _strlen - function to find the length of a string
* @str: the string to find its length
* Return: length of the string
*/


int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
