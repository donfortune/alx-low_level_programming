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

	for (i = 122; i >= 97; --i)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
