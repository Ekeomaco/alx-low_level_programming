#include "main.h"

/**
 * print_alphabet - utilize on the _putchar functions to print
 * the alphabet a - z
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
