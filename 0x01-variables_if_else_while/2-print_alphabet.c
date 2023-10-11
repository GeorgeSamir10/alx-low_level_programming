#include<stdio.h>
/**
 *main - entry point
 *
 *Description: c program that outputs alphapet followed by a new line
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}
