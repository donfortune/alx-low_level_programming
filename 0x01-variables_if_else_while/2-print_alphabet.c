#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; Input[i]; i++)
	{
		Input[i] = tolower(Input[i]);
		putchar(Input[i]);
	}

	return (0);
}
