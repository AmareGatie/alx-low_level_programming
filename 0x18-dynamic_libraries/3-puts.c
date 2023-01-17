#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
