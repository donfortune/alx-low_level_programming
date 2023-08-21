#include "main.h"
/**
 * _puts - Prints a string followed by a newline to stdout.
 * @str: Pointer to the input string.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
