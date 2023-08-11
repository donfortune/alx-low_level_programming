#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	return (0);
}
