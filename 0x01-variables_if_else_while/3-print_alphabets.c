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
		Input[i] = tolower(Input[i]);
		putchar(Input[i]);
		putchar('\n');
		Input[i] = toupper(Input[i]);
		putchar(Input[i]);
	}

	return (0);
}

