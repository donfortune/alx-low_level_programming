#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination memory arrea
 * @src: source memory area
 * @n: bytes filled
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
