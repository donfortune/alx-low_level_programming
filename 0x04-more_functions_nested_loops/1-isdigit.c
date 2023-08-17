#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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

