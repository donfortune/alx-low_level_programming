#include "main.h"

/**
 * clear_bit - set the value of a bit.
 * @n: argument.
 * @index: aregument.
 * Return: 1 if it worked or -1 if there is an error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n = *n & ~(1 << index);
return (1);
}
