#include "main.h"

/**
 * _isdigit - Check if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
