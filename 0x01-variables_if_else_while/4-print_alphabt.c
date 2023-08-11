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
		char lowercase = tolower(Input[i]);
		if (lowercase != 'g' && lowercase != 'e')
		{
			putchar(lowercase);
			putchar('\n');
		}
	}

	return (0);
}
