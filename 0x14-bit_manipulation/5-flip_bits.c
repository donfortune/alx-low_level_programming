#include "main.h"

/**
 * flip_bits - the number of bits you need to flip to get from one number.
 * @n: argument.
 * @m: argumenmts.
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flip_num = 0;
unsigned long int result = n ^ m;
while (result > 0)
{
flip_num += result & 1;
result >>= 1;
}
return (flip_num);
}
