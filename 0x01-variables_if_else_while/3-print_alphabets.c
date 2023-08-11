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
	char Input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; Input[i]; i++)
	{
		putchar(tolower(Input[i]));
		putchar(toupper(Input[i]));
		putchar('\n');
	}

	return (0);
}

