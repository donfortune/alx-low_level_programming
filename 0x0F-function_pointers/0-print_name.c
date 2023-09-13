#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name.
 * @name: the name to be printed.
 * @f: function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
