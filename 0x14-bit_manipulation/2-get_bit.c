#include "main.h"

/**
 * get_bit - function that returnus the value of a bit at a given index.
 * @n: argument 1.
 * @index: second argument.
 * Return: the value of the bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (n == 0)
		return (0);
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}
