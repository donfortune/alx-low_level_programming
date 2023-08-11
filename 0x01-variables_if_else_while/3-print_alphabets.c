#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: returns 0 when everything works fine
*
*/

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
