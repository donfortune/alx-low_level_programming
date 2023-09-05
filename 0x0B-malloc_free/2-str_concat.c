#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	
	
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	string = (char *)malloc(sizeof(char) * (i + j + 1));

	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
	{
		string[k] = s1[k];
	}

	for (l = 0; l <= i; l++)
	{
		string[l] = s2[l];
	}

	return (string);




}
