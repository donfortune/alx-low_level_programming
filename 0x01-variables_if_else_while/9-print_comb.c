#include <stdio.h>

/**
* main - Entry point
*
* Return: returns 0 when everything works fine
*
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
