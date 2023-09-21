#include <stdio.h>

/**
 * pre_main - function executed before main
 * Return: no return.
 */

void pre_main(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
