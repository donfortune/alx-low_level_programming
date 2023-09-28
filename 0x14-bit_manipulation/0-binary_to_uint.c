#include "main.h"

/**
 * binary_to_uint - convert a binary to an int.
 * @b: pointer to a string.
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_number = 0;

	if (b == NULL || *b == '\0')
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		converted_number = (converted_number * 2) + (*b - '0');
		++b;
	}

	return (converted_number);
}
