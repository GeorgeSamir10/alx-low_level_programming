#include "main.h"

/**
 * print_alphabet - print lowercase alphabet to stdout
 */

void print_alphabet(void)
{
        char a;

        a = 'a';
        while (a <= 'z')
        {
                _putchar(a);
                a++;
        }
        _putchar('\n');
}
